#include "main.h"

/**
 * _puts - function
 * @str: The string to be evaluated
 * Prints a string
 *
 * Return: Void
 *
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
