#include "search_algos.h"

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}

/**
 * search - Part of binary search algorithm
 *
 * @array: The array to be used
 * @size: Number of elements in @array
 * @low: The lowest index of the array
 * @value: The value to be searched
 *
 * Return: Index of the value in the array
 */
int search(int *array, int low, int size, int value)
{
	int index = -1, middle;

	if (size >= low)
	{
		middle = (low + size) / 2;

		printf("Searching in array: ");
		print_array(&array[low], size - low + 1);
		if (array[middle] == value)
		{
			index = array[middle];
			return (index);
		}
		/* Search right half */
		if (array[middle] < value)
		{
			if (size % 2 == 0)
				middle++;
			return (search(array, middle + 1, size, value));
		}
		/* Search left half */
		return (search(array, low, middle - 1, value));
	}
	return (index);
}
/**
 * binary_search - function to search an element from an array
 * @array: The array where value will be searched
 * @size: The number of elements of the array
 * @value: The value to be searched
 *
 * Search an element using binary search algorithm
 *
 * Return: The index of a value, -1 otherwise
 *
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	if (!array)
		return (-1);

	index = search(array, 0, size - 1, value);
	return (index);
}
