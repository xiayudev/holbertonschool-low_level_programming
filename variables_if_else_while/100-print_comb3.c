#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Print all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;
	int num_left, num_right;

	for (i = 0; i < 10; i++)
	{
		for (j = i; i < 10)
		{
			num_left = i + '0';
			num_right = j + '0';
			if (i == j)
				continue;
			putchar(num_left);
			putchar(num_right);
			if (i == 8 && j == 9)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
