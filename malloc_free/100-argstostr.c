#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - function
 * @ac: The string to be copied
 * @av: The string to be copied
 * Creates a copy of the string str
 *
 * Return: Pointer to the new string
 *
 */
char *argstostr(int ac, char **av)
{
	int i, j, total_size = 0, k;
	char *new_str;

	if (av == NULL || ac == 0)
		return (NULL);

	i = 0;
	while (*(av + i))
	{
		j = 0;
		while (*(*(av + i) + j))
			j++;
		total_size += j;
		i++;
	}
	new_str = malloc(sizeof(char) * (total_size + 1));
	if (new_str == NULL)
		return (NULL);

	i = 0;
	k = 0;
	while (*(av + i))
	{
		j = 0;
		while (*(*(av + i) + j))
		{
			*(new_str + k) = *(av[i] + j);
			k++;
			j++;
		}
		*(new_str + k) = '\n';
		k++;
		i++;
	}
	*(new_str + k) = '\0';
	return (new_str);
}
