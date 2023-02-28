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
	char *swap;
	swap = str;

	/*Size of the string*/
	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}

	/*From middle to end*/
	if (i % 2 != 0)
		i = (i - 1) / 2;
	else
		i /= 2;

	while (*(swap + i) != '\0')
	{
		_putchar(*(swap + i));
		i++;
	}
	_putchar(10);
}
