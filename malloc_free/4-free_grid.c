#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function
 * @grid: The 2d array to be freed
 * @height: The colum of the array
 * Free a 2d array
 *
 * Return: Void
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(*(grid + i));
		i++;
	}
	free(grid);
}
