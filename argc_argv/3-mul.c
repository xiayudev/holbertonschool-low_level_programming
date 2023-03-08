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
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = convert(argv[1]);
		num2 = convert(argv[2]);
		printf("%d\n", num1 * num2);
	}
	return (0);
}
