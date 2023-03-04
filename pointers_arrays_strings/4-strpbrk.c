#include "main.h"

/**
 * _strpbrk - function
 * @s: The string to be scanned
 * @accept: The string to match with s
 * Searches a string for any of a set of bytes
 *
 * Return: The number of characters
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p_temp;

	i = 0;
	while (*(s + i))
	{
		j = 0;
		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
			{
				p_temp = s + i;
				return (p_temp);
			}
			j++;
		}
		i++;
	}
	return (0);
}
