#include "main.h"

/**
 * print_alphabet_x10 - function
 * @c: The character to be tested
 * Checks is uppercase
 *
 * Return: 1 if uppercase, 0 otherwise 
 *
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
