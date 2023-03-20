#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function
 * @d: The size of the array
 * @name: The character to be evaluated
 * @age: The character to be evaluated
 * @owner: The character to be evaluated
 *
 * Initialize a struct
 *
 * Return: Void
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
