#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function
 * @n: The number to be tested
 * Prints all natural numbers from n to 98
 *
 * Return: A list of numbers
 *
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d", n);
			n++;
		}
		printf("\n");
	}
	else
	{
		while (n >= 98)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d", n);
			n--;
		}
		printf("\n");
	}
}
