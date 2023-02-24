#include <stdio.h>


/**
 * main - Entry point
 *
 * Prints the 98 Fibonacci numbers
 *
 * Return: 0 All success.
 *
 */
int  main(void)
{
	int i;
	unsigned long int first = 0, second = 0, third = 1;
	unsigned long int first_l, first_r, second_l, second_r, sum1, sum2;

	i = 0;
	while (i <= 91)
	{
		first = second;
		second = third;
		third = first + second;
		(i != 91) ? printf("%lu, ", third) : printf("%lu", third);
		i++;
	}

	first_l = first / 10000000000;
	first_r = first % 10000000000;
	second_l = second / 10000000000;
	second_r = second % 10000000000;
	sum1 = first_l + second_l;
	sum2 = first_r + second_r;

	for (i = 92; i <= 97; i++)
	{
		first_l = second_l;
		first_r = second_r;
		second_l = sum1;
		second_r = sum2;
		sum1 = first_l + second_l;
		sum2 = first_r + second_r;
		if (sum2 > 9999999999)
		{
			sum1 = sum1 + (sum2 / 10000000000);
			sum2 %= 10000000000;
		}
		printf(", %lu%lu", sum1, sum2);
	}
	printf("\n");
	return (0);
}
