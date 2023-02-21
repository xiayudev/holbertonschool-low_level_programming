#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Print all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hexa[] = "0123456789abcdef";
	size_t i;

	for (i = 0; i < sizeof(hexa) - 1; i++)
		putchar(hexa[i]);

	putchar('\n');

	return (0);
}
