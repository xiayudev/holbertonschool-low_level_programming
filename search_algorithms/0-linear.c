#include "search_algos.h"

/**
 * linear_search - function to search an element from an array
 * @array: The array where value will be searched
 * @size: The number of elements of the array
 * @value: The value to be searched
 *
 * Search an element using linear search algorithm
 *
 * Return: The index of a value, -1 otherwise
 *
 */
int linear_search(int *array, size_t size, int value)
{
	int index = -1;
	size_t i = 0;

	if (!array)
		return (-1);

	for (; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%ld] = [%d]", i, array[i]);
			printf("\n");
			return (i);
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	return (index);
}
