#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function
 * @b: The size
 * Allocates memory
 *
 * Return: Void
 *
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);
	else
		return (mem);
}
