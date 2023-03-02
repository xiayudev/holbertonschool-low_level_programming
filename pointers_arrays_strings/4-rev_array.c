#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function
 * @a: The array
 * @n: The number of elements of the array
 * Reverse an array
 *
 * Return: Void
 *
 */
void reverse_array(int *a, int n)
{
	int i, *swap, temp, j;

	swap = a;
	i = 0;
	while (i < n)
	{
		a++;
		i++;
	}

	j = 0;
	while (j < i / 2)
	{

		a--;
		temp = *a;
		*a = *(swap + j);
		*(swap + j) = temp;
		j++;
	}
}
