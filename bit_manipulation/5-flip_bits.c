#include "main.h"

/**
 * flip_bits - function to flip bits
 * @n: The number to be changed
 * @m: The number to follow
 *
 * Change bits to change from number n to number m
 *
 * Return: The number of bits to be changed
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int total = 0;

	while (n)
	{
		if ((n & 1) != (m & 1))
			total++;
		n >>= 1;
		m >>= 1;
	}
	return (total);

}
