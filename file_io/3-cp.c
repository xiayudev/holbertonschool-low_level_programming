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
 * _strlen - function
 * @s: The string to be evaluated
 * Swap values of two integers
 *
 * Return: Length of a string
 *
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*(s + length))
	{
		length++;
	}
	return (length);
}

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
void set_string(int counter1, char **grid, char *argv[],
		ssize_t fdto, ssize_t fdfrom)
{
	ssize_t rd, wr, cl1, cl2;
	int i;

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
		wr = write(fdto, grid[i], SIZE_OF_BUFF);
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
	cl1 = close(fdto);
	cl2 = close(fdfrom);
	if (cl1 == -1 || cl2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n",
			(cl1 == -1) ? fdto : fdfrom);
		exit(100);
	}
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
	char **grid, c[100] = {0};
	int counter1, counter2, i = 1, len = 0;

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
	fdto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC);
	if (access(argv[2], F_OK) != 0)
		fchmod(fdto, S_IRUSR | S_IWUSR | S_IROTH | S_IWGRP | S_IRGRP);
	if (fdto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (i)
	{
		i = read(fdfrom, c, 100);
		len += i;
	}
	close(fdfrom);
	fdfrom = open(argv[1], O_RDONLY);
	counter1 = len / SIZE_OF_BUFF;
	counter2 = len % SIZE_OF_BUFF;
	if (counter2 && counter1 > 0)
		counter1++;
	grid = alloc_grid(SIZE_OF_BUFF, counter1);
	if (!grid)
		return (0);
	set_string(counter1, grid, argv, fdto, fdfrom);
	free_grid(grid, counter1);
	return (0);
}
