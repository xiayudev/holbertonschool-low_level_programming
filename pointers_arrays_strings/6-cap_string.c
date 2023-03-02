#include "main.h"

/**
 * cap_string - function
 * @str: The string to be evaluated
 * Capitalize every word
 *
 * Return: Every word capitalized
 *
 */
char *cap_string(char *str)
{
	int i, j;
	char *sep = " ,\t\n{}\".!?()";

	i = 0;
	while (*(str + i))
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			j = 0;
			while (*(sep + j))
			{
				if (*(str + i - 1) == *(sep + j))
				{
					*(str + i) -= 32;
					break;
				}
				else
				{
					j++;
					continue;
				}
				j++;
			}
		}
		i++;
	}
	return (str);
}
