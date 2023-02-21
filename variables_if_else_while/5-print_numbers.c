#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Print the alphabet in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char numbers[] = "0123456789";
	size_t i;

	for (i = 0; i < sizeof(numbers) - 1; i++)
		putchar(numbers[i]);

	putchar('\n');

	return (0);
}
