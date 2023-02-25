#include "main.h"

/**
 * print_triangle - function
 * @size: Size of the trinagle
 * Draw a triangle
 *
 * Return: void
 *
 */
void print_triangle(int size)
{
	int i, s, j;

	if (size > 0)
	{
		s = size;
		for (i = 0; i < size; i++)
		{
			while (s > i + 1)
			{
				_putchar(' ');
				s--;
			}
			s = size;
			for (j = 0; j < i + 1; j++)
				_putchar('#');
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
