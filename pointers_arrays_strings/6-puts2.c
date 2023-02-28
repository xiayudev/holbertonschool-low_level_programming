#include "main.h"

/**
 * puts2 - function
 * @str: The string to be reversed
 * Prints every other character
 *
 * Return: Void
 *
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		if (i % 2 == 0)
			_putchar(*str);
		str++;
		i++;
	}
	_putchar(10);
}
