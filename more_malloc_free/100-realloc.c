#include "main.h"
#include <stdlib.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
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
	unsigned int i;
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
		arr = malloc(new_size);
		if (!arr)
			return (NULL);
		for (i = 0; i < old_size; i++)
		{
			*((char *)arr + i) = *((char *)ptr + i);
		}
		*((char *)arr + new_size - 1) = '\0';
		return (arr);
	}
	arr = malloc(new_size);
	if (!arr)
		return (NULL);
	*((char *)arr + new_size - 1) = '\0';
	i = 0;
	while (i < MIN(old_size, new_size))
	{
		*((char *)arr + i) = *((char *)ptr + i);
		i++;
	}
	return (arr);
}
