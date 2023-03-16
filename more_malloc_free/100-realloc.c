#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function
 * @ptr: The elements of the array
 * @old_size: The number of bytes
 * @new_size: The number of bytes
 * Reallocate a memory block
 *
 * Return: Pointer to void
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, min;
	void *arr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		arr = malloc(new_size);
		if (!arr)
			return (NULL);
		return (arr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		min = (old_size < new_size) ? old_size : new_size;
		arr = malloc(new_size);
		if (!arr)
			return (NULL);
		for (i = 0; i < min; i++)
		{
			*((char *)arr + i) = *((char *)ptr + i);
		}
		*((char *)arr + new_size - 1) = '\0';
		free(ptr);
		return (arr);
	}
	return (0);
}
