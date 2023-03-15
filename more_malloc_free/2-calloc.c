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
	void *arr = malloc(sizeof(size) * nmemb);

	if (arr == NULL || nmemb == 0 || size == 0)
		return (NULL);
	return (arr);
}
