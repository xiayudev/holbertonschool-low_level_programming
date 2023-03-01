#include "main.h"

/**
 * _strcat - function
 * @dest: The character to be evaluated
 * @src: The character to be evaluated
 * Concatenates two strings
 *
 * Return: Pointer to the resulting dest
 *
 */
char *_strcat(char *dest, char *src)
{
	int i;
	char *temp;

	temp = dest;

	while (*dest != '\0')
		dest++;

	i = 0;
	while (*src != '\0')
	{
		*(dest + i) = *src;
		i++;
		src++;
	}

	/*Add nul character at the end*/
	*(dest + i) = *src;
	return (temp);
}
