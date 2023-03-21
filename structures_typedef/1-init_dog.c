#include "dog.h"

/**
 * init_dog - function
 * @d: Pointer to the structure dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: The owner of the dog
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
