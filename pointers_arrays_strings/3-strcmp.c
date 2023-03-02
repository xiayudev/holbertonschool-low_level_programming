#include "main.h"
#include <stdio.h>

/**
 * compare - function
 * @s1: The string to be evaluated
 * @s2: The string to be evaluated
 * Compares two strings
 *
 * Return: values < 0, > 0 or == 0
 *
 */

int compare(char *s1, char *s2, int len)
{
	int i, result;

	if (len < 0)
	{
		i = 0;
		while (*(s2 + i) != '\0')
		{
			if (*(s1 + i) == *(s2 + i))
			{
				if (*(s2 + 1) == '\0')
					return (0);
				i++;
				continue;
			}
			else
			{
				result = *(s1 + i) - *(s2 - i);
				return (result);
			}
			i++;
		}
	}

	i = 0;
	while (*(s1 + i) != '\0')
	{
		if (*(s1 + i) == *(s2 + i))
		{
			if (*(s1 + 1) == '\0')
				return (0);
			i++;
			continue;
		}
		else
		{
			result = *(s1 + i) - *(s2 - i);
			return (result);
		}
		i++;
	}
	return (0);
}


/**
 * _strcmp - function
 * @s1: The string to be evaluated
 * @s2: The string to be evaluated
 * Compares two strings
 *
 * Return: values < 0, > 0 or == 0
 *
 */
int _strcmp(char *s1, char *s2)
{
	int result, len;
	short len_s1, len_s2;

	len_s1 = 0;
	while (*(s1 + len_s1) != '\0')
		len_s1++;

	len_s2 = 0;
	while (*(s2 + len_s2) != '\0')
		len_s2++;

	len = len_s1 - len_s2;
	if (len_s1 == len_s2)
	{
		result = compare(s1, s2, len);
		return (result);
	}
	else if (len_s1 > len_s2)
	{
		result = compare(s1, s2, len);
		return (result);
	}
	else
	{
		result = compare(s1, s2, len);
		return (result);
	}
	return (0);
}
