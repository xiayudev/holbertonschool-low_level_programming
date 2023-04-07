#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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

/**
 * insert_dnodeint_at_index - Function to add a node
 * @h: Pointer to the doubly linked list
 * @n: The value to be added
 * @idx: The index where the new node will be added
 *
 * Adds a new node at the idx position
 *
 * Return: The address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *p_head = (*h);
	size_t counter = 0, len;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	len = dlistint_len(p_head);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if ((!(*h) && idx != 0) || idx > len - 1)
		return (NULL);
	while (p_head)
	{
		if (idx == 0)
		{
			(*h)->prev = new_node;
			new_node->next = (*h);
			(*h) = new_node;
			return (new_node);
		}
		else if (idx == counter)
		{
			new_node->prev = p_head->prev;
			new_node->next = p_head;
			p_head->prev->next = new_node;
			p_head->prev = new_node;
			return (new_node);
		}
		p_head = p_head->next;
		counter++;
	}
	(*h) = new_node;
	return (new_node);
}
