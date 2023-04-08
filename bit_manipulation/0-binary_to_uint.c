#include "main.h"

/**
 * binary_to_uint - function to convert binary to decimal
 * @b: The character containing the binary number
 *
 * Convert binary to decimal
 *
 * Return: The converted number
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i, len, power = 1;

	if (!b)
		return (0);

	len = 0;
	while (*(b + len))
	{
		if (*(b + len) > '1' || *(b + len) < '0')
			return (0);
		len++;
	}

	i = len - 1;
	while (i >= 0)
	{
		decimal += (*(b + i) - 48) * power;
		power <<= 1;
		i--;
	}
	return (decimal);
}
