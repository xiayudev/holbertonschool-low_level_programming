#include "main.h"
#include <stdio.h>

/**
 * print_array - function
 * @a: The array to be reversed
 * @n: The number of elements of the array
 * Prints 'n' elements of an array
 *
 * Return: Void
 *
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i == n - 1)
			printf("%d", *(a + i));
		else
			printf("%d, ", *(a + i));
		i++;
	}
	putchar(10);
}
