#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function
 * @name: The name of the dog
 * @age: The dog's age
 * @owner: The dog's owner
 *
 * Creates a new dog
 *
 * Return: The new dog
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog = NULL;

	my_dog = malloc(sizeof(struct dog));
	if (!my_dog)
		return (NULL);

	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
	return (my_dog);
}
