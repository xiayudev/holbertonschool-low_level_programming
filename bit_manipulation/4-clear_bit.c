#include "main.h"

/**
 * clear_bit - function to clear a bit
 * @n: The decimal to be evaluated
 * @index: The index
 *
 * Given an index, clear the value of a bit
 *
 * Return: 1 success, -1 otherwise
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	/* Put the 0 at the given index in binary */
	*n = *n & ~(1 << index);
	return (1);

}
