#include "main.h"

/**
 * _isdigit - function
 * @c: The character to be tested
 * Checks is a digit
 *
 * Return: 1 if uppercase, 0 otherwise
 *
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
