#include "main.h"

/**
 * _memset - function
 * @dest: The destination array
 * @src: The source of data
 * @n: The number of bytes to be copied
 * Fills memory
 *
 * Return: Pointer to destination array
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
