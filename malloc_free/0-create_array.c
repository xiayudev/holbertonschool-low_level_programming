#include "main.h"
#include <stdlib.h>

/**
 * create_array - function
 * @size: The size of the array
 * @c: The character to be evaluated
 * Creates an array of char dynamically
 *
 * Return: Pointer to the array 
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str = malloc(sizeof(char) * size);

	if (str == NULL || size == 0)
		return (NULL);

	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
