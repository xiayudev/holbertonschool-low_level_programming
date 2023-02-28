#include "main.h"
#include <stdio.h>

/**
 * rev_string - function
 * @s: The string to be reversed
 * Reverse a string
 *
 * Return: Void
 *
 */
void rev_string(char *s)
{
	char *swap;
	int i, j;
	char temp;

	swap = s;
	j = 0;
	while (*s != '\0')
	{
		s++;
		j++;
	}

	/*Stop at the middle*/
	i = 0;

	while (i < j / 2)
	{
		s--;
		temp = *s;
		*s = *(swap + i);
		*(swap + i) = temp;
		i++;
	}
}
