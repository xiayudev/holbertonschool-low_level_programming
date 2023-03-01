#include "main.h"
#include <stdio.h>

/**
 * _atoi - function
 * @s: The string to be copied
 * Convert a string to integer
 *
 * Return: Integer
 *
 */
int _atoi(char *s)
{
	int signo;
	unsigned int number = 0;

	signo = 0;
	while (*s != '\0')
	{
		if (*s == '-')
			signo++;
		if (*s >= 48 && *s <= 57)
		{
			number *= 10;
			number += (*s - '0');
			if (*(s + 1) < '0' || *(s + 1) > '9')
				break;
		}
		s++;
	}

	if (signo % 2 != 0)
		number *= -1;

	return (number);
}
