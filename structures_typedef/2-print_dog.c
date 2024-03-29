#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - function
 * @d: Pointer to the structure dog
 *
 * Initialize a struct
 *
 * Return: Void
 *
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		(d->name)
			? printf("Name: %s\n", d->name)
			: printf("Name: %p\n", d->name);
		(d->age)
			? printf("Age: %f\n", d->age)
			: printf("Age: %f\n", d->age);
		(d->owner)
			? printf("Owner: %s\n", d->owner)
			: printf("Owner: %p\n", d->owner);
	}
}
