#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
/**
 * struct op - Structure op
 * @a: First member
 * @b: Second member
 *
 * Description: Struct to print according to type
 */
struct op
{
	char *c;
	void (*f)(va_list);
};

/**
 * op_t - Typedef for struct op
 */
typedef struct op op_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif /*VARIADIC_FUNCTIONS_H*/
