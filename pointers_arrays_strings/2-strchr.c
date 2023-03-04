#include "main.h"
#include <stddef.h>

/**
 * _strchr - function
 * @s: The string to be scanned
 * @c: The character to be searched
 * Locates a character in a string
 *
 * Return: Pointer to the first ocurrence
 *
 */
char *_strchr(char *s, char c)
{
	int i;
	char *p_temp;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) == c)
		{
			p_temp = s + i;
			return (p_temp);
		}
		i++;
	}
	return (NULL);
}
