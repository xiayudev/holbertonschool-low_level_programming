#include "main.h"
#include <stdio.h>

/**
 * rot13 - function
 * @s: The string to be encoded
 * Encodes a string
 *
 * Return: String encoded
 *
 */
char *rot13(char *s)
{
	int i, j;
	char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *beta  = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	i = 0;
	while (*(s + i))
	{
		j = 0;
		while (*(alpha + j))
		{
			if (*(s + i) == *(alpha + j))
			{
				*(s + i) = *(beta + j);
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
