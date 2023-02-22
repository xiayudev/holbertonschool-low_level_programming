#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - function
 * @n: The number to be tested
 * Print the last digit
 *
 * Return: The last digit
 *
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
	{
		_putchar('0' - last_digit);
		return (-last_digit);
	}
	_putchar('0' + last_digit);
	return (last_digit);
}
