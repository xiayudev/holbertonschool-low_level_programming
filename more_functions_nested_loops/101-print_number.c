#include "main.h"

/**
 * recursive_print - function
 * @n: Integer
 * Prints an integer recursively
 *
 * Return: Void
 *
 */
void recursive_print(int n)
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
		n *= -1;
		_putchar('-');
		recursive_print(n);
	}
	else
		recursive_print(n);
}
