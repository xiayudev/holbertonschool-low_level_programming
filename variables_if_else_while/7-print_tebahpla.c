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
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	size_t size = sizeof(alphabet) - 1;
	int i;

	for (i = size; i > 0; i--)
		putchar(alphabet[i - 1]);

	putchar('\n');

	return (0);
}
