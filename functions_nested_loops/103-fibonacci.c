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
	int top = 4000000;
	int even_nums = 0;

	i = 0;
	while (i < 50)
	{
		first = second;
		second = third;
		third = first + second;
		if (third <= top)
			if (third % 2 == 0)
				even_nums += third;
		i++;
	}

	printf("%d\n", even_nums);
	return (0);
}
