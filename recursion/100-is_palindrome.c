#include "main.h"

/**
 * recursion - function
 * @s: The string to be evaluated
 * @i: The iterator
 * @len: The length of s
 * Calculate if s is palindrome
 *
 * Return: 1 if s is palindrome, 0 otherwise
 *
 */
int recursion(char *s, int i, int len)
{
	if (i > len)
		return (1);
	if (i == len)
		return (1);
	if (*(s + i) != *(s + len))
		return (0);
	return (recursion(s, i + 1, len - 1));
}

/**
 * length - function
 * @s: The string to be evaluated
 * Calculate the length of the s
 *
 * Return: Length of a string
 *
 */
int length(char *s)
{
	int i;

	i = 1;
	if (*s == '\0')
		return (0);
	return (i + length(s + 1));
}

/**
 * is_palindrome - function
 * @s: The string to be evaluated
 * Calculate if s is palindrome
 *
 * Return: 1 if s is palindrome, 0 otherwise
 *
 */
int is_palindrome(char *s)
{
	int len_s, i, r;

	len_s = length(s);
	i = 0;
	r = recursion(s, i, len_s - 1);
	return (r);
}
