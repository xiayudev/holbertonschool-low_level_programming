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
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar(10);
}
