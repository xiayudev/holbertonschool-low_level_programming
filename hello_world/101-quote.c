#include <stdio.h>

/**
 * main - Entry point
 *
 * Print a phrase in the stderr
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(str, 1,  sizeof(str), stderr);

	return (1);
}
