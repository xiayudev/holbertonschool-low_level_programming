#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - function to delete
 * @ht: The hash table
 *
 * Delete a hash table
 *
 * Return: Void
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp, *delete;

	i = 0;
	while (i < ht->size)
	{
		temp = ht->array[i];
		delete = temp;
		while (temp)
		{
			temp = temp->next;
			free(delete->key);
			free(delete->value);
			free(delete);
			delete = temp;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
