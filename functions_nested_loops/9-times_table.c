#include "main.h"

/**
 * times_table - function
 *
 * Print the 9 times table
 *
 * Return: void
 *
 */
void times_table(void)
{
	int i = 0, j, increment;

	while (i < 10)
	{
		j = 0;
		increment = 0;
		while (j < 10)
		{
			if (increment > 9)
			{
				_putchar((increment / 10) + '0');
				_putchar((increment % 10) + '0');
				if (j == 9)
					break;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(increment + '0');
				if (j == 9)
					break;
				if (increment + i > 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			increment += i;
			j++;
		}
		_putchar('\n');
		i++;
	}
}
