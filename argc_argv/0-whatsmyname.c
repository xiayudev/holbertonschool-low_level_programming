#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: The argument count
 * @argv: The argument vector
 * Print its name
 *
 * Return: 0 All success
 *
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", argv[argc - 1]);
	return (0);
}
