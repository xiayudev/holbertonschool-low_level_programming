#include "main.h"
#include <stdio.h>
/**
 * print_times_table - function
 * @n: The number to be printed
 * Print the n times table
 *
 * Return: void
 *
 */
void print_times_table(int n)
{
	int i = 0, j, increment;

	if (n >= 0 && n < 16)
	{
		while (i <= n)
		{
			j = 0;
			increment = 0;
			while (j <= n)
			{
				if (j != n)
				{
					if (increment + i > 9 && increment + i < 100)
						printf("%d,  ", increment);
					else if (increment + i > 99)
						printf("%d, ", increment);
					else
						printf("%d,   ", increment);
				}
				else
					printf("%d", increment);

				increment += i;
				j++;
			}
			printf("\n");
			i++;
		}
	}
}
