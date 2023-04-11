#include "main.h"
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>


/**
 * read_textfile - function to read a text file
 * @filename: The pathname to the file
 * @letters: The number of letters
 *
 * Read a text file and print it to the POSIX stdout
 *
 * Return: The number of letters to be read and printed
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, bytes, wr;
	size_t i;
	char *buff;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY, S_IRUSR);
	if (fd == -1)
		return (0);

	buff = malloc(letters + 1);
	if (!buff)
		return (0);

	/* Initialize the buffer with nul-character*/
	i = 0;
	while (i < letters)
	{
		*(buff + i) = '\0';
		i++;
	}
	*(buff + i) = '\0';

	bytes = read(fd, buff, letters);
	if (bytes == -1)
		return (0);

	wr = write(1, buff, bytes);
	if (wr == -1 || wr != bytes)
		return (0);
	close(fd);
	free(buff);
	return (wr);
}
