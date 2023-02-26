#include "main.h"
#include <stdio.h>
/**
 * recursive_print - function
 * @n: Integer
 * Prints an integer recursively
 *
 * Return: Void
 *
 */
void recursive_print(unsigned int n)
{

	if (n / 10)
	{
		recursive_print(n / 10);
	}
	_putchar((n % 10) + '0');
}

/**
 * print_number - function
 * @n: Integer
 * Prints an integer
 *
 * Return: Void
 *
 */
void print_number(int n)
{
	if (n < 0)
	{
		unsigned int num = (unsigned int) n * -1;
		_putchar('-');
		recursive_print(num);
	}
	else
		recursive_print(n);
}
