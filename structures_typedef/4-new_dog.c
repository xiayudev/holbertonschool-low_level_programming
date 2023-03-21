#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - function
 * @s: The string to be evaluated
 *
 * Length of the string
 *
 * Return: The length of the string
 *
 */

int _strlen(char *s)
{
	int length;

	length = 0;
	while (*(s + length))
		length++;
	return (length);
}

/**
 * _strdup - function
 * @str: The string to be copied
 *
 * Duplicate a string
 *
 * Return: The pointer to the duplicated string
 *
 */

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
 * _strcpy - function
 * @dest: New string copied
 * @src: The string to be copied
 * Copy an string to another variable
 *
 * Return: Pointer to dest
 *
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	/*How to take nul character*/
	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = *(src + i);
	return (dest);
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
	int i;
	char *c_name, *c_owner;
	dog_t *my_dog;

	my_dog = malloc(sizeof(struct dog));
	if (!my_dog)
		return (NULL);

	c_name = malloc(_strlen(name) + 1);
	c_owner = malloc(_strlen(owner) + 1);

	if (!c_name || !c_owner)
	{
		free(c_name);
		free(c_owner);
		free(my_dog);
		return (NULL);
	}
	i = 0;
	while (*(name + i))
	{
		*(c_name + i) = *(name + i);
		i++;
	}
	*(c_name + i) = '\0';
	i = 0;
	while (*(owner + i))
	{
		*(c_owner + i) = *(owner + i);
		i++;
	}
	*(c_owner + i) = '\0';

	my_dog->name = c_name;
	my_dog->age = age;
	my_dog->owner = c_owner;
	return (my_dog);
}
