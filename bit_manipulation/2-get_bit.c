#include "main.h"

/**
 * get_bit - function to get a bit
 * @n: The decimal to be evaluated
 * @index: The index
 *
 * Given an index, get the value of a bit
 *
 * Return: Value of a bit
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (n)
	{
		if (i == index)
			return (n & 1);
		n >>= 1;
		i++;
	}
	return (-1);
}
