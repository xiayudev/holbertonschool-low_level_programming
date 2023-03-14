#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function
 * @width: The width of the array
 * @height: The height of the array
 * Create a 2d array
 *
 * Return: Pointer to a 2d array of integers
 *
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array2d = malloc(sizeof(int *) * height);

	i = 0;
	while (i < width)
	{
		*(array2d + i) = malloc(sizeof(int) * width);
		i++;
	}

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	if (array2d == NULL)
		return (NULL);

	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			*(*(array2d + i) + j) = 0;
			j++;
		}
		i++;
	}
	return (array2d);
}
