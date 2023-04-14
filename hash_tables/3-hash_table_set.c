#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * _strlen - function
 * @s: The string to be evaluated
 * Swap values of two integers
 *
 * Return: Length of a string
 *
 */
int _strlen(const char *s)
{
	int length;

	length = 0;
	while (*(s + length))
		length++;
	return (length);
}

/**
 * hash_table_set - function to add an element
 * @ht: The hash table
 * @key: The key to be stored
 * @value: The value to be stored
 *
 * Add an element to the hash table
 *
 * Return: 1 success, 0 otherwise
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *node_temp;

	if (!key || !ht)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (!ht->array[index])
	{
		new_node = malloc(sizeof(hash_node_t));
		if (!new_node)
			return (0);
		new_node->key = malloc(sizeof(char *) * (_strlen(key) + 1));
		if (!new_node->key)
		{
			free(new_node);
			return (0);
		}
		new_node->value = malloc(sizeof(char *) * (_strlen(value) + 1));
		if (!new_node->value)
		{
			free(new_node->key);
			free(new_node);
			return (0);
		}
		strcpy(new_node->key, key);
		strcpy(new_node->value, value);
		new_node->next = NULL;
		ht->array[index] = new_node;
	}
	else
	{
		new_node = malloc(sizeof(hash_node_t));
		if (!new_node)
			return (0);
		new_node->key = malloc(sizeof(char *) * (_strlen(key) + 1));
		if (!new_node->key)
		{
			free(new_node);
			return (0);
		}
		new_node->value = malloc(sizeof(char *) * (_strlen(value) + 1));
		if (!new_node->value)
		{
			free(new_node->key);
			free(new_node);
			return (0);
		}
		strcpy(new_node->key, key);
		strcpy(new_node->value, value);
		node_temp = ht->array[index];
		new_node->next = node_temp;
		ht->array[index] = new_node;

	}
	return (1);
}
