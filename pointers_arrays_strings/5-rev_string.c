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
	if (j % 2 == 0)
		j = (j / 2) - 1;
	else
		j /= 2;

	i = 0;
	while (i < j)
	{
		s--;
		temp = *s;
		*s = *(swap + i);
		*(swap + i) = temp;
		i++;
	}
}
