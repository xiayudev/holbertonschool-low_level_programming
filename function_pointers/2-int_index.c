#include "function_pointers.h"

/**
 * int_index - function
 * @array: The array
 * @size: The size of the array
 * @cmp: The function pointer
 *
 * Searches for an integer
 *
 * Return: The index of the first element
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, match = 0;

	if (size <= 0)
		return (-1);
	if (cmp && array)
	{
		i = 0;
		while (i < size)
		{
			if (cmp(array[i]))
			{
				match = 1;
				return (i);
			}
			i++;
		}
	}
	if (match == 0)
		return (-1);
	return (0);
}
