#include "lists.h"
#include <stddef.h>
#include <stdio.h>


/**
 * dlistint_len - Function to return elements of a doubly linked list
 * @h: Pointer to the doubly linked list
 *
 * Counts the number of elements of a doubly linked list
 *
 * Return: The number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;
	const dlistint_t *temp = h;

	while (temp)
	{
		temp = temp->next;
		counter++;
	}
	return (counter);
}
