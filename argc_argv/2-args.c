#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: The argument count
 * @argv: The argument vector
 * Print all arguments
 *
 * Return: 0 All success
 *
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
