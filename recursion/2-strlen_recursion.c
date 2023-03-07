#include "main.h"

/**
 * _strlen_recursion - function
 * @s: The character to be evaluated
 * Calculate the length of the string
 *
 * Return: length of a string
 *
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 1;
	if (*s == '\0')
		return (0);
	return (i + _strlen_recursion(s + 1));
}
