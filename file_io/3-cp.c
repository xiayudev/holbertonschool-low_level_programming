#include "main.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define SIZE_OF_BUFF 1024
#define TYPE_ALLOC char


/**
 * alloc_grid - function
 * @width: The width of the array
 * @height: The height of the array
 * Create a 2d array
 *
 * Return: Pointer to a 2d array of integers
 *
 */
TYPE_ALLOC **alloc_grid(int width, int height)
{
	int i, j;
	TYPE_ALLOC **array2d = malloc(sizeof(TYPE_ALLOC *) * height);

	if (width <= 0 || height <= 0 || array2d == NULL)
	{
		free(array2d);
		return (NULL);
	}

	i = 0;
	while (i < height)
	{
		*(array2d + i) = malloc(sizeof(TYPE_ALLOC) * width);
		if (*(array2d + i) == NULL)
		{
			j = 0;
			while (j <= i)
			{
				free(*(array2d + j));
				j++;
			}
			free(array2d);
			return (NULL);
		}
		i++;
	}

	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			*(*(array2d + i) + j) = '\0';
			j++;
		}
		i++;
	}
	return (array2d);
}

/**
 * free_grid - function
 * @grid: The 2d array to be freed
 * @height: The colum of the array
 * Free a 2d array
 *
 * Return: Void
 *
 */
void free_grid(TYPE_ALLOC **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(*(grid + i));
		i++;
	}
	free(grid);
}

/**
 * set_string - function to copy text
 * @counter1: The number of characters
 * @grid: The buffer
 * @argv: The array of parameters passed
 * @fdto: The file with content
 * @fdfrom: The file to be written
 *
 * Copy and writes text to fdto
 *
 * Return: Void
 *
 */
int set_string(int counter1, char **grid, char *argv[],
		ssize_t fdto, ssize_t fdfrom)
{
	ssize_t rd, wr;
	char *s;
	int i = 1, length;

	i = 0;
	while (i < counter1)
	{
		rd = read(fdfrom, grid[i], SIZE_OF_BUFF);
		if (rd == -1)
		{
			dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		length = 0;
		s = grid[i];
		while (*(s + length))
		{
			if (!*(s + length + 1) && *(s + length + 2) != '\0')
				length++;
			length++;
		}
		wr = write(fdto, grid[i], length);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				argv[2]);
			close(fdto);
			close(fdfrom);
			exit(99);
		}
		i++;
	}
	return (0);
}

/**
 * close_file - function
 * @fdto: The file to be created or written
 * @fdfrom: The file with the content
 * @argv: The arguments
 *
 * Make all the operation
 *
 * Return: 0 success
 *
 */
int close_file(ssize_t fdto, ssize_t fdfrom, char *argv[])
{
	ssize_t cl1, cl2;
	int i = 1, counter1, counter2, len = 0;
	char **grid, c[100] = {0};

	while (i)
	{
		i = read(fdfrom, c, 100);
		if (i == -1)
		{
			dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		len += i;
	}
	if (!len)
	{
		close(fdfrom);
		return (0);
	}
	close(fdfrom);
	fdfrom = open(argv[1], O_RDONLY);
	counter1 = len / SIZE_OF_BUFF;
	counter2 = len % SIZE_OF_BUFF;
	if (counter2)
		counter1++;
	grid = alloc_grid(SIZE_OF_BUFF + 1, counter1);
	if (!grid)
		return (0);
	set_string(counter1, grid, argv, fdto, fdfrom);
	cl1 = close(fdto);
	cl2 = close(fdfrom);
	if (cl1 == -1 || cl2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n",
			(cl1 == -1) ? fdto : fdfrom);
		exit(100);
	}
	free_grid(grid, counter1);
	return (0);
}

/**
 * main - function to copy text
 * @argc: The number of arguments
 * @argv: The array of parameters passed
 *
 * Copy content from one file to another
 *
 * Return: 1 success, -1 otherwise
 *
 */
int main(int argc, char *argv[])
{
	ssize_t fdto, fdfrom;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdfrom = open(argv[1], O_RDONLY);
	if (fdfrom == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (access(argv[2], F_OK) == 0)
		fdto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC);
	else
	{
		fdto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC);
		fchmod(fdto, S_IRUSR | S_IWUSR | S_IROTH | S_IWGRP | S_IRGRP);
	}
	if (fdto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	return (close_file(fdto, fdfrom, argv));
}
