#include "main.h"
#include <stdio.h>

/**
 * print - function
 * @b: The string to be encoded
 * @i: The iterator
 * @c: The character to print
 * @size: Number of bytes to be printed
 * Print characters
 *
 * Return: Void
 *
 */
void print(char *b, int i, char c, int size)
{
	int j;

	if (i % 10 == 0)
	{
		printf("%08x: ", i);

		j = i;
		while (j < i + 10)
		{
			if (j >= size)
			{
				if (j % 2 == 0)
					printf("  ");
				else
					printf("   ");
			}
			else
			{
				if (j % 2 == 0)
					printf("%02x", *(b + j));
				else
					printf("%02x ", *(b + j));
			}
			j++;
		}
		printf(" %c", c);
	}
	else
		printf("%c", c);
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
		if (i % 10 == 0 && i != 0)
			putchar(10);
		if (*(b + i) < 33 && *(b + i) != ' ')
		{
			print(b, i, '.', size);
		}
		else
		{
			print(b, i, *(b + i), size);
		}
		i++;
	}
	putchar(10);
}
