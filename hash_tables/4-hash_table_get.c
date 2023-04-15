#include <stdlib.h>
#include "hash_tables.h"


/**
 * compare - function
 * @s1: The string to be evaluated
 * @s2: The string to be evaluated
 * Compares two strings
 *
 * Return: values < 0, > 0 or == 0
 *
 */

int compare(char *s1, const char *s2)
{
	int i, result;


	i = 0;
	while (*(s1 + i) != '\0')
	{
		if (*(s1 + i) == *(s2 + i))
		{
			if (*(s1 + i + 1) == '\0')
				return (0);
		}
		else
		{
			result = *(s1 + i) - *(s2 + i);
			return (result);
		}
		i++;
	}
	return (0);
}


/**
 * _strcmp - function
 * @s1: The string to be evaluated
 * @s2: The string to be evaluated
 * Compares two strings
 *
 * Return: values < 0, > 0 or == 0
 *
 */
int _strcmp(char *s1, const char *s2)
{
	int result, i;
	short len_s1, len_s2;

	len_s1 = 0;
	while (*(s1 + len_s1) != '\0')
		len_s1++;

	len_s2 = 0;
	while (*(s2 + len_s2) != '\0')
		len_s2++;

	if (len_s1 == len_s2)
	{
		result = compare(s1, s2);
		return (result);
	}
	else if (len_s1 > len_s2)
	{
		result = compare(s1, s2);
		return (result);
	}
	else if (len_s1 < len_s2)
	{
		i = 0;
		while (*(s2 + i) != '\0')
		{
			if (*(s1 + i) == *(s2 + i))
			{
				i++;
				continue;
			}
			else
			{
				result = *(s1 + i) - *(s2 + i);
				return (result);
			}
			i++;
		}
	}
	return (0);
}

/**
 * hash_table_get - function to retrieve a value
 * @key: The key to be used
 * @ht: The hash table
 *
 * Retrieve a value associated with a key
 *
 * Return: The value on success, NULL if key not found
 *
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node)
	{
		if (_strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
