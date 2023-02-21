#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Print all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int num;

	for (i = 0; i < 10; i++)
	{
		num = i + '0';
		putchar(num);
		if (num == '9')
			break;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
