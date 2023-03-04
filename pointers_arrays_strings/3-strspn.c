#include "main.h"

/**
 * _strspn - function
 * @s: The string to be scanned
 * @accept: The string to match with s
 * Gets the length of a substring
 *
 * Return: The number of characters
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, exist = 1;
	unsigned int counter = 0;

	i = 0;
	while (*(s + i))
	{
		j = 0;
		exist = 0;
		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
			{
				exist = 1;
				counter++;
				break;
			}
			j++;
		}
		if (exist == 0)
			return (counter);
		i++;
	}
	return (0);
}
