#include "main.h"
#include <stdlib.h>

/**
 * array_range - function
 * @min: The min value
 * @max: The max value
 * Creates an array of integers
 *
 * Return: Pointer to the new array
 *
 */
int *array_range(int min, int max)
{
	int  i;
	int *arr;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * ((max - min) + 1));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (min <= max)
	{
		*(arr + i) = min;
		min++;
		i++;
	}
	return (arr);
}
