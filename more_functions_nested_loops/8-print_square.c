#include "main.h"

/**
 * print_square - function
 * @size: Size of the square
 * Draw a diagonal line
 *
 * Return: void
 *
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
