#include "main.h"

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
	int i, j, len_needle, coincidence = 1;
	char *p_temp;


	len_needle = 0;
	while (*(needle + len_needle))
		len_needle++;

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
	return (0);
}
