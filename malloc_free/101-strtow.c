#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * len_str - function helper
 * @str: The string to be evaluated
 * Counts the number of words in a string
 *
 * Return: The number of words
 *
 */
int len_str(char *str)
{
	int i, num_words = 0, is_char = 0;

	i = 0;
	while (*(str + i))
	{
		is_char = 0;
		if (*(str + i) == ' ')
		{
			if (*(str + i + 1) != ' ' && *(str + i + 1) != '\0')
				is_char = 1;
		}

		if (is_char == 1)
			num_words += 1;
		i++;
	}
	return (num_words);
}

/**
 * alloc_strings - function
 * @str: The string to be evaluated
 * @new_str: The array of words
 * @num_words: The number of words
 * Allocates mamory for each word
 *
 * Return: Void
 *
 */
void *alloc_strings(char *str, char **new_str, int num_words)
{
	int i, j, k, l, m;

	i = 0;
	k = 0;
	while (*(str + i))
	{
		if (*(str + i) != ' ')
		{
			j = 0;
			m = i;
			while (*(str + m) != ' ' && *(str + m) != '\0')
			{
				m++;
				j++;
			}
			if (k < num_words)
			{
				new_str[k] = malloc(sizeof(char) * (j + 1));
				if (new_str[k] == NULL)
				{
					l = 0;
					while (l <= k)
						free(new_str[l]);
					free(new_str);
					return (NULL);
				}
				k++;
			}
			i += j;
			continue;
		}
		i++;
	}
	return (0);
}

/**
 * strtow - function
 * @str: The string to be evaluated
 * Splits a string into words
 *
 * Return: The new string
 *
 */
char **strtow(char *str)
{
	int num_words, i, j, m, k;
	char **new_str;

	num_words = len_str(str);
	new_str = malloc(sizeof(char *) * (num_words + 1));

	if (new_str == NULL || str == NULL || num_words == 0)
	{
		free(new_str);
		return (NULL);
	}

	new_str[num_words] = NULL;

	alloc_strings(str, new_str, num_words);
	i = 0;
	k = 0;
	while (*(str + i))
	{
		if (*(str + i) != ' ')
		{
			j = 0;
			m = i;
			while (*(str + m) != ' ' && *(str + m) != '\0')
			{
				*(new_str[k] + j) = *(str + m);
				m++;
				j++;
			}
			*(new_str[k] + j) = '\0';
			i += j;
			k++;
			continue;
		}
		i++;
	}
	return (new_str);
}
