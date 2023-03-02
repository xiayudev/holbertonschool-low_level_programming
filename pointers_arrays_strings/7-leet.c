#include "main.h"

/**
 * leet - function
 * @str: The string to be evaluated
 * Encodes a string into 1337
 *
 * Return: Pointer to the string encoded
 *
 */
char *leet(char *str)
{
	int i, j;
	char *lower = "aeotl";
	char *upper = "AEOTL";
	char *digit = "43071";

	i = 0;
	while (*(str + i))
	{
		j = 0;
		while (*(lower + j))
		{
			if (*(str + i) == *(lower + j) || (*(str + i) == *(upper + j)))
			{
				*(str + i) = *(digit + j);
			}
			else
			{
				j++;
				continue;
			}
			j++;
		}
		i++;
	}
	return (str);
}
