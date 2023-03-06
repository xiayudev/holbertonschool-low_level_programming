#include "main.h"
#include <stdio.h>

/**
 * print - function
 * @b: The string to be encoded
 * @i: The number of bytes to be printed
 * Print characters
 *
 * Return: Void
 *
 */
void print(char *b, int i)
{
	if (*(b + i + 6) == '\0')
	{
		printf("%08x: %02x%02x %02x%02x %02x%02x	   %c",
				i, *(b + i), *(b + i + 1), *(b + i + 2),
				*(b + i + 3), *(b + i + 4), *(b + i + 5),
				*(b + i));
	}
	else
		printf("%08x: %02x%02x %02x%02x %02x%02x %02x%02x %02x%02x %c",
				i, *(b + i), *(b + i + 1), *(b + i + 2),
				*(b + i + 3), *(b + i + 4), *(b + i + 5),
				*(b + i + 6), *(b + i + 7), *(b + i + 8),
				*(b + i + 9), *(b + i));

}


/**
 * print_buffer - function
 * @b: The string to be encoded
 * @size: The number of bytes to be printed
 * Prints characters
 *
 * Return: Void
 *
 */
void print_buffer(char *b, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		if (i % 10 == 0)
			putchar(10);
		if (*(b + i) < 33 && *(b + i) != ' ')
		{
			if (i % 10 == 0)
			{
			printf(
			"%08x: %02x%02x %02x%02x %02x%02x %02x%02x %02x%02x %c",
				i, *(b + i), *(b + i + 1), *(b + i + 2),
				*(b + i + 3), *(b + i + 4), *(b + i + 5),
				*(b + i + 6), *(b + i + 7), *(b + i + 8),
				*(b + i + 9), '.');
			}
			else
				printf("%c", '.');
		}
		else
		{
			if (i % 10 == 0)
			{
				print(b, i);
			}
			else
				printf("%c", *(b + i));
		}
		i++;
	}
	putchar(10);
}
