#include <stdio.h>

/**
 * main - Entry point
 * Prints the name of the current file
 *
 * Return: 0 All success
 *
 */
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
