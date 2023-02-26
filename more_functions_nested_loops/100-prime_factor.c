#include <stdio.h>
/**
 * main - Entry point
 * Prints numbers from 1 to 100
 *
 * Return: 0 All success
 *
 */
int main(void)
{
	long i = 2;
	long number = 612852475143;

	while (number > i)
	{
		if (number % i == 0)
		{
			number /= i;
		}
		else
			i++;
	}
	printf("%ld\n", i);

	return (0);
}
