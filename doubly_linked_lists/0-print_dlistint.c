#include "lists.h"
#include <stddef.h>
#include <stdio.h>


/**
 * print_dlistint - Function to print elements of a doubly linked list
 * @h: Pointer to the doubly linked list
 *
 * Prints all the elements of a doubly linked list
 *
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;
	const dlistint_t *temp = h;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		counter++;
	}
	return (counter);
}
