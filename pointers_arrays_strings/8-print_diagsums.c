#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function
 * @a: 2d array
 * @size: Size of the array
 * Sum two diagonals
 *
 * Return: Void
 *
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum_diag1 = 0, sum_diag2 = 0;

	i = 0;
	while (i < size * size)
	{
		sum_diag1 += *(a + i);
		i += size + 1;
	}

	j = size - 1;
	while (j < size * size)
	{
		sum_diag2 += *(a + j);
		j += size - 1;
		if (j == (size * size) - 1)
			break;
	}

	printf("%d, %d\n", sum_diag1, sum_diag2);
}
