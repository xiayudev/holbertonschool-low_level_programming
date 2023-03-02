#include "main.h"

/**
 * string_toupper - function
 * @str: The string to be evaluated
 * Change lower to uppercase
 *
 * Return: String in uppercase
 *
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			*(str + i) -= ' ';
		}
		i++;
	}
	return (str);
}
