#include "function_pointers.h"

/**
 * print_name - function
 * @name: The function pointer
 * @f: The character to be evaluated
 * Prints a name
 *
 * Return: Void
 *
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
