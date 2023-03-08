#include "main.h"
#include <stdio.h>

#define UNUSED(argv) (void)(argv)
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
	UNUSED(argv);
	printf("%d\n", argc - 1);
	return (0);
}
