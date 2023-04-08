#include "main.h"

/**
 * set_bit - function to set a bit
 * @n: The decimal to be evaluated
 * @index: The index
 *
 * Given an index, set the value of a bit
 *
 * Return: 1 success, -1 otherwise
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	/* Put the 1 at the given index in binary */
	*n = *n | (1 << index);
	return (1);

}
