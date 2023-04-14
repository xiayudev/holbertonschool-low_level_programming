#include "main.h"

/**
 * hash_table_create - function to create a hash table
 * @size: The size of the hash table
 *
 * Create a hash table
 *
 * Return: Pointer to the new hash table
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *rtn;
	unsigned long int i;

	rtn = malloc(sizeof(hash_table_t));
	if (!rtn)
		return (NULL);
	rtn->size = size;
	rtn->array = malloc(rtn->size * sizeof(hash_node_t *));
	if (!rtn->array)
		return (NULL);

	i = 0;
	while (i < rtn->size)
		rtn->array[i] = NULL;
	return (rtn);
}
