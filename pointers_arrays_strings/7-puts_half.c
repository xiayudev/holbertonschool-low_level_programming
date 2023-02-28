#include "main.h"

/**
 * puts_half - function
 * @str: The string to be reversed
 * Prints half of a string
 *
 * Return: Void
 *
 */
void puts_half(char *str)
{
	int i;
	char *swap = NULL;

	swap = str;

	/*Size of the string*/
	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}

	if (i % 2 != 0)
		i = ((i - 1) / 2) + 1; /*The LAST i elements*/
	else
		i /= 2;

	while (*(swap + i) != '\0')
	{
		_putchar(*(swap + i));
		i++;
	}
	_putchar(10);
}
