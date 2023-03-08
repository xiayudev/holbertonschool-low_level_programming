#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * main - Entry point
 * @argc: The argument count
 * @argv: The argument vector
 * Multiplies two numbers
 *
 * Return: 0 All success
 *
 */
int main(int argc, char *argv[])
{
	int num, sum = 0;
	int i, counter[5] = {0, 0, 0, 0, 0};
	int bills[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	for (i = 0; i < 5; i++)
	{
		if (num / bills[i])
		{
			counter[i] = num / bills[i];
			num = num - (bills[i] * counter[i]);
		}
		sum = sum + counter[i];
	}
	printf("%d\n", sum);
	return (0);
}
