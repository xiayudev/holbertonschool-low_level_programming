#include "main.h"

/**
 * print_rev - function
 * @s: The string to be evaluated
 * Prints a string, in reverse
 *
 * Return: Void
 *
 */
void print_rev(char *s)
{
	char *init;

	init = s;

	while (*s != '\0')
	{
		s++;
	}
	while (s >= init)
	{
		_putchar(*s);
		s--;
	}
	_putchar(10);
}
