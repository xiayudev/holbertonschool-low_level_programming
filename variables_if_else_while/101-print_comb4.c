#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Print all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;
	int num_left, num_middle, num_right;

	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			for (k = j; k < 10; k++)
			{
				num_left = i + '0';
				num_middle = j + '0';
				num_right = k + '0';
				if (i == j || i == k || j == k)
					continue;
				putchar(num_left);
				putchar(num_middle);
				putchar(num_right);
				if (i == 7 && j == 8)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
