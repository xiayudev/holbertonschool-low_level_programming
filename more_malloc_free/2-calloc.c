#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function
 * @nmemb: The elements of the array
 * @size: The number of bytes
 * Allocates memory for an array
 *
 * Return: Pointer to void
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < nmemb)
	{
		if (size == 1)
			*((char *)arr + i) = 0;
		else if (size == 4)
			*((int *)arr + i) = 0;
		i++;
	}
	return (arr);
}
