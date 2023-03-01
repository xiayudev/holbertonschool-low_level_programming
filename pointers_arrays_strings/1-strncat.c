#include "main.h"

/**
 * _strncat - function
 * @dest: The string to be evaluated
 * @src: The string to be evaluated
 * @n: The number of bytes
 * Concatenates two strings
 *
 * Return: Pointer to the resulting dest
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len_src;
	char *temp;

	temp = dest;

	while (*dest != '\0')
		dest++;

	i = 0;
	len_src = 0;

	while (src[len_src] != '\0')
		len_src++;


	if (n > len_src)
		n = len_src;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (temp);
}
