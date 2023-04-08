#include "main.h"

/**
 * print_binary - function to convert decimal to binary
 * @n: The decimal to be converted
 *
 * Convert decimal to binary and print it
 *
 * Return: Void
 *
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	/**
	 * n & 1:
	 * Checks if the number is odd(1) or even(0)
	 *
	 */
	(n & 1) ? _putchar('1') : _putchar('0');
}
