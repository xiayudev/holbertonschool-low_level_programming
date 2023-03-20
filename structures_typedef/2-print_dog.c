#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - function
 * @d: The size of the array
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
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
