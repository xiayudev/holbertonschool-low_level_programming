#include "main.h"


/**
 * swap_int - function
 * @a: The integer to be evaluated
 * @b: The integer to be evaluated
 * Swap values of two integers
 *
 * Return: Void
 *
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
