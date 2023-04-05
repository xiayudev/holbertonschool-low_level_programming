#include "lists.h"
#include <stddef.h>
#include <stdio.h>


/**
 * print_list - Function to print elements of a linked list
 * @h: Pointer to the linked list
 *
 * Prints all the elements of a linked list
 *
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;
	const list_t *temp = h;
	while (temp)
	{
		(temp->str)
			? printf("[%d] %s\n", temp->len, temp->str)
			: printf("[%d] %p\n", temp->len, NULL);
		temp = temp->next;
		counter++;
	}
	return (counter);
}
