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
	long i, j, largest = 0;
	int is_prime = 1; 
	long number = 612852475143;

	for (i = 2; i <= number; i++)
	{
		if (number % i == 0)
		{
			is_prime = 1;
			for (j = 2; j < i; j++)
			{
				if (i % j == 0)
					is_prime = 0;
			}
			if (is_prime == 1)
				largest =  i;
		}
	}
	printf("%ld\n", largest);

	return (0);
}
