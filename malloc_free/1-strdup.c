#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function
 * @str: The string to be copied
 * Creates a copy of the string str
 *
 * Return: Pointer to the duplicated string
 *
 */
char *_strdup(char *str)
{
	int i;
	char *new_str = malloc(sizeof(char) * sizeof(str));

	if (new_str == NULL)
		return (NULL);

	i = 0;
	while (*(str + i))
	{
		*(new_str + i) = *(str + i);
		i++;
	}
	*(new_str + i) = '\0';
	return (new_str);
}
