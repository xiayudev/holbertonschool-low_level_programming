#include "main.h"

/**
 * recursive - function
 * @n: The integer to be printed
 * Prints an integer
 *
 * Return: Void
 *
 */
void recursive(unsigned int n)
{
	if (n / 10)
		recursive(n / 10);
	_putchar((n % 10) + '0');
}


/**
 * print_number - function
 * @n: The integer to be printed
 * Prints an integer
 *
 * Return: Void
 *
 */
void print_number(int n)
{
	if (n < 0)
	{
		unsigned int num = n * -1;
		_putchar('-');
		recursive(num);
	}
	else
	{
		recursive(n);
	}
}
