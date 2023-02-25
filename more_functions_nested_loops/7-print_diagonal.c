#include "main.h"

/**
 * print_diagonal - function
 * @n: Number of times '\' is printed
 * Draw a diagonal line
 *
 * Return: void
 *
 */
void print_diagonal(int n)
{
	int i, s = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			while (s < i)
			{
				_putchar(' ');
				s++;
			}
			s = 0;
			_putchar('\\');
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
