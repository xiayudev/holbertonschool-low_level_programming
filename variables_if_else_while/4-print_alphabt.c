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
	size_t i;

	for (i = 0; i < sizeof(alphabet) - 1; i++)
	{
		if (alphabet[i] == 'q' || alphabet[i] == 'e')
			continue;
		putchar(alphabet[i]);
	}
	putchar('\n');

	return (0);
}
