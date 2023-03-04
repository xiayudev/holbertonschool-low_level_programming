#include "main.h"
#include <stddef.h>

/**
 * _strstr - function
 * @haystack: The string to be scanned
 * @needle: The string to match with s
 * Locates a substring
 *
 * Return: Pointer to the beginning of the located string
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, coincidence = 1;
	char *p_temp;

	if (*needle == '\0')
		return (haystack);

	i = 0;
	while (*(haystack + i))
	{
		if (*(haystack + i) == *(needle + 0))
		{
			j = 0;
			coincidence = 0;
			p_temp = haystack + i;
			while (*(needle + j))
			{
				if (*(p_temp + j) == *(needle + j))
				{
					coincidence = 1;
				}
				else
				{
					coincidence = 0;
					break;
				}
				j++;
			}
			if (coincidence == 1)
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return (NULL);
}
