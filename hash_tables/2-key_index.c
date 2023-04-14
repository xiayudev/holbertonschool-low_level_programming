#include <stdlib.h>
#include <stddef.h>
#include "hash_tables.h"

/**
 * key_index - function to create an index
 * @key: The key to be used
 * @size: The size of the hash table
 *
 * Create an index for a hash table
 *
 * Return: The index of a key/value
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}
