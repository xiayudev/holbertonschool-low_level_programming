#include "main.h"


/**
 * _isalpha - function
 * @c: The character to be evaluated
 * Checks for lowercase or uppercase character
 *
 * Return: 1 if lowercase, 0 otherwise
 *
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
