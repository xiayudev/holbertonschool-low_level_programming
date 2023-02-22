#include "main.h"


/**
 * main - Entry point
 *
 * Prints all lowercase alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}


/**
 * print_alphabet - function
 *
 * Prints all lowercase alphabet
 *
 * Return: void
 *
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
}
