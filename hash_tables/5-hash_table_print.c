#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - function to print
 * @ht: The hash table
 *
 * Print a hash table
 *
 * Return: Void
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, flag = 0;
	hash_node_t *temp;


	if (ht)
	{
		putchar(123);
		i = 0;
		while (i < ht->size)
		{
			temp = ht->array[i];
			while (temp)
			{
				(!flag)
					? printf("'%s': '%s'", temp->key, temp->value)
					: printf(", '%s': '%s'", temp->key, temp->value);
				temp = temp->next;
				flag = 1;
			}
			i++;
		}
		putchar(125);
		putchar(10);
	}
}
