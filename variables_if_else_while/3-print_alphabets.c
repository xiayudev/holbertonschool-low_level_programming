#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Print the alphabet in lowercase and then in uppercase followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower_alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	char upper_alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	size_t i;

	for (i = 0; i < sizeof(lower_alphabet) - 1; i++)
		putchar(lower_alphabet[i]);

	for (i = 0; i < sizeof(upper_alphabet) - 1; i++)
		putchar(upper_alphabet[i]);

	putchar('\n');

	return (0);
}
