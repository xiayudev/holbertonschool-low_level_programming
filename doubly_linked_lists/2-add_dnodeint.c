#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Function to add a node
 * @head: Pointer to the doubly linked list
 * @n: The value to be added
 *
 * Adds a new node at the beginning of the doubly linked list
 *
 * Return: The address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	if (!(*head))
		new_node->next = NULL;
	else
	{
		(*head)->prev = new_node;
		new_node->next = (*head);
	}
	(*head) = new_node;

	return (new_node);
}
