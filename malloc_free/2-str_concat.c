#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function
 * @s1: The string to be evaluated
 * @s2: The string to be evaluated
 * Concatenates two strings
 *
 * Return: Pointer to the concatenated string
 *
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *new_str;

	/* Cheking if s1 or/and s2 is NULL */
	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";

	/* Length of s1 and s2 */
	i = 0;
	while (*(s1 + i))
		i++;
	j = 0;
	while (*(s2 + j))
		j++;

	new_str = malloc(sizeof(char) * (i + j + 1));

	if (new_str == NULL)
		return (NULL);

	/* Adding s1 and s2 to new string */
	i = 0;
	while (*(s1 + i))
	{
		*(new_str + i) = *(s1 + i);
		i++;
	}

	j = 0;
	while (*(s2 + j))
	{
		*(new_str + i) = *(s2 + j);
		j++;
		i++;
	}
	*(new_str + i) = *(s2 + j);
	return (new_str);
}
