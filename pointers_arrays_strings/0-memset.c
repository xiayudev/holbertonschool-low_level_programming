#include "main.h"

/**
 * _memset - function
 * @s: The block of memory to fill
 * @b: The value to be set
 * @n: The number of bytes
 * Fills memory
 *
 * Return: Pointer to the memory area
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
