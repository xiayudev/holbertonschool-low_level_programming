#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - function
 * @array: The array
 * @size: The size of the array
 * @action: The function pointer
 *
 * Executes a function for each element of the array
 *
 * Return: Void
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action)
	{
		i = 0;
		while (i < size)
		{
			action(*(array + i));
			i++;
		}
	}
}
