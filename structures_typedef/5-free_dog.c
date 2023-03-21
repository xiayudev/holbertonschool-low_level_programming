#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - function
 * @d: The struct dog
 *
 * Frees dogs
 *
 * Return: Void
 *
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
