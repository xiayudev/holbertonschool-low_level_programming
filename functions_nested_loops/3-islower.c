#include "main.h"


/**
 * _islower - function
 * @c: The character to be evaluated
 * Checks for lowercase character
 *
 * Return: 1 if lowercase, 0 otherwise
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
