#include "main.h"
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

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

	if (!s)
		return (0);
	length = 0;
	while (*(s + length))
	{
		length++;
	}
	return (length);
}

/**
 * append_text_to_file - function to append text
 * @filename: The name of the file to be created
 * @text_content: The string to be added
 *
 * Create a file and add content to it
 *
 * Return: 1 success, -1 otherwise
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, wr;
	int len;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	len = _strlen(text_content);
	if (!len)
	{
		close(fd);
		return (1);
	}
	wr = write(fd, text_content, len);
	if (wr == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
