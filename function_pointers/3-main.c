#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: The number of parameters
 * @argv: The array that contains the parameters
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	my_func_def_t rta;
	char *s = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((*s != '+' && *s != '-' && *s != '*' && *s != '/' && *s != '%')
			|| *(s + 1) != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	rta = get_op_func(s);
	printf("%d\n", rta(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
