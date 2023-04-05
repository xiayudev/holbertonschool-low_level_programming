#include "lists.h"
#include <stddef.h>
#include <stdio.h>


/**
 * list_len - Function to return elements of a linked list
 * @h: Pointer to the linked list
 *
 * Counts the number of elements of a linked list
 *
 * Return: The number of elements
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;
	const list_t *temp = h;

	while (temp)
	{
		temp = temp->next;
		counter++;
	}
	return (counter);
}
