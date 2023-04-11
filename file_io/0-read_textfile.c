#include "main.h"
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>


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
	int i;
	char buff[1024];

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY, S_IRUSR);
	if (fd == -1)
		return (0);
	i = 0;
	while (i < 1024)
	{
		buff[i] = '\0';
		i++;
	}
	bytes = read(fd, buff, letters);
	if (bytes == -1)
		return (0);
	wr = write(1, buff, bytes);
	if (wr == -1 || wr != bytes)
		return (0);
	close(fd);
	return (wr);
}
