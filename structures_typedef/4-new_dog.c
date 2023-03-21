#include "dog.h"
#include <stdlib.h>

int _strlen(char *s)
{
        int length;

        length = 0;
        while (*(s + length))
                length++;
        return (length);
}

char *_strdup(char *str)
{
	int i;
	char *new_str;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (*(str + i))
		i++;
	new_str = malloc(sizeof(char) * (i + 1));

	if (new_str == NULL)
		return (NULL);

	i = 0;
	while (*(str + i))
	{
		*(new_str + i) = *(str + i);
		i++;
	}
	*(new_str + i) = *(str + i);
	return (new_str);
}
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
	char *c_name, *c_owner;
	dog_t *my_dog;

	my_dog = malloc(sizeof(struct dog));
	if (!my_dog)
		return (NULL);

	c_name = _strdup(name);
	c_owner = _strdup(owner);
	my_dog->name = malloc(sizeof _strlen(name + 1));
	if (!my_dog->name)
	{
		free(my_dog->owner);
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	my_dog->name = c_name;

	my_dog->age = age;

	my_dog->owner = malloc(sizeof _strlen(owner + 1));
	if (!my_dog->owner)
	{
		free(my_dog->owner);
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	my_dog->owner = c_owner;
	return (my_dog);
}
