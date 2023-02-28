#include "main.h"
#include <stdio.h>

/**
 * _strcpy - function
 * @dest: New string copied
 * @src: The string to be copied
 * Copy an string to another variable
 *
 * Return: Pointer to dest
 *
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	/*How to take nul character*/
	while (*src != '\0')
	{
		*(dest + i) = *src;
		src++;
		i++;
	}
	*(dest + i) = *src;
	return (dest);
}
