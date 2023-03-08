#include "main.h"
#include <stdio.h>


/**
 * convert - function
 * @s: The string to be converted
 * Covert string to int
 *
 * Return: Number
 *
 */
int convert(char *s)
{
	int num, i;

	i = 0;
	num = 0;
	while (*(s + i))
	{
		if (*(s + i) == '-')
		{
			i++;
			continue;
		}
		num = num * 10  + (*(s + i) - '0');
		i++;
	}
	if (*(s + 0) == '-')
		return (num * -1);
	return (num);
}
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
	int sum = 0, i, j;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (*(argv[i] + j))
		{
			if (*(argv[i] + j) < '0' || *(argv[i] + j) > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
	}

	for (i = 1; i < argc; i++)
	{
		sum += convert(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
