#include <stdio.h>


/**
 * main - Entry point
 *
 * Prints the 50 Fibonacci numbers
 *
 * Return: 0 All success.
 *
 */
int  main(void)
{
	int i;
	long first = 0, second = 0, third = 1;

	i = 0;
	while (i < 50)
	{
		first = second;
		second = third;
		third = first + second;
		printf("%ld, ", third);
		if (i == 49)
			printf("%ld", third);
		i++;
	}

	printf("\n");
	return (0);
}
