#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - function
 * @s: The operator
 *
 * Select the correct function to operate based on the operator
 *
 * Return: Pointer to the correspond function
 *
 */
my_func_def_t get_op_func(char *s)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while ((ops + i))
	{
		if (*((ops + i)->op) == *s)
		{
			my_func_def_t func_ptr = *(ops + i)->f;

			return (func_ptr);
		}
		i++;
	}
	return (NULL);
}
