#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function
 * @s1: The string to be evaluated
 * @s2: The string to be evaluated
 * @n: The size
 * Concatenates two strings
 *
 * Return: Pointer to the new string
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j;
	unsigned int i;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	while (*(s1 + i))
		i++;
	j = 0;
	while (*(s2 + j))
		j++;

	if (n >= j)
		n = j;

	new_str = malloc(sizeof(char) * (i + n + 1));
	if (new_str == NULL)
		return (NULL);


	i = 0;
	while (*(s1 + i))
	{
		*(new_str + i) = *(s1 + i);
		i++;
	}

	j = 0;
	while (j < n)
	{
		*(new_str + i) = *(s2 + j);
		i++;
		j++;
	}
	*(new_str + i) = '\0';
	return (new_str);
}
