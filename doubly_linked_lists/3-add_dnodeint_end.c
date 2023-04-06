#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_dnodeint_end - Function to add a node
 * @head: Pointer to the doubly linked list
 * @n: The value to be added
 *
 * Adds a new node at the end of the doubly linked list
 *
 * Return: The address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *p_head = (*head);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!(*head))
	{
		new_node->prev = NULL;
		(*head) = new_node;
	}
	else
	{
		while (p_head->next)
			p_head = p_head->next;
		p_head->next = new_node;
		new_node->prev = p_head;
	}
	return (new_node);
}
