#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_dnodeint_at_index - Function to search for a node by index
 * @head: Pointer to the doubly linked list
 * @index: The index to be searched
 *
 * Searches for a node by a index
 *
 * Return: The nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *p_head = head;
	size_t i;

	if (head)
	{
		i = 0;
		while (p_head)
		{
			if (index == i)
				return (p_head);
			p_head = p_head->next;
			i++;
		}
	}
	return (NULL);
}
