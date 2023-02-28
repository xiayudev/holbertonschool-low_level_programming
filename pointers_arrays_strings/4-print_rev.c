#include "main.h"
#include <stdio.h>

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
	int count;

	init = s;
	while (*s != '\0')
	{
		s++;
		count++;
	}
	while (s != init)
	{
		s--;
		count--;
		_putchar(*s);
	}
	_putchar(10);
}
