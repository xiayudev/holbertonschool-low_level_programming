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
 * check_node - function to add an element
 * @node: The node
 * @key: The key to be stored
 * @value: The value to be stored
 *
 * Add an element at the beginnig of the hash table
 *
 * Return: 1 success, 0 otherwise
 *
 */

int check_node(hash_node_t *node, const char *key, const char *value)
{
	hash_node_t *new_node, *temp;

	temp = node;
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			temp->value = (char *)value;
			return (1);
		}
		temp = temp->next;
	}
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
	temp = node;
	new_node->next = temp;
	node = new_node;
	return (1);
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
	hash_node_t *new_node;

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
		check_node(ht->array[index], key, value);
	return (1);
}
