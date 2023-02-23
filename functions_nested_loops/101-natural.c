#include <stdio.h>


/**
 * main - Entry point
 *
 * Prints the sum of all the multiples of 3 or 5 below 1024 (excluded)
 *
 * Return: 0 All success.
 *
 */
int  main(void)
{
	int i, num = 1024;
	int mult_5 = 0;
	int mult_3 = 0;
	int mult_35 = 0;

	for (i = 1; i < num; i++)
	{
		if ((i % 5 == 0) && (i % 3 == 0))
			mult_35 += i;
		else if (i % 5 == 0)
			mult_5 += i;
		else if (i % 3 == 0)
			mult_3 += i;
	}

	printf("%d\n", mult_5 + mult_3 + mult_35);
	return (0);
}
