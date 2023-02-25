#include "main.h"

/**
 * print_line - function
 * @n: Number of times '_' is printed
 * Draw a straight line
 *
 * Return: void
 *
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar(10);
	}
	else
		_putchar(10);
}
