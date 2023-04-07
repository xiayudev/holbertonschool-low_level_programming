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
 * delete_dnodeint_at_index - Function to delete a node
 * @head: Pointer to the doubly linked list
 * @index: The index where the node will be deleted
 *
 * Deletes a node at the idx position
 *
 * Return: 1 Success, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p_head = (*head), *p_temp;
	unsigned int counter = 0;
	size_t len;

	len = dlistint_len(p_head);

	if (!(*head) || index > (len - 1))
		return (-1);
	while (p_head)
	{
		p_temp = p_head;
		if (index == 0)
		{
			p_head = p_head->next;
			if (p_head)
				p_head->prev = NULL;
			(*head) = p_head;
			free(p_temp);
			return (1);
		}
		else if (index == counter && index == (len - 1))
		{
			p_head->prev->next = NULL;
			free(p_temp);
			return (1);
		}
		else if (index == counter)
		{
			p_head->prev->next = p_head->next;
			p_head->next->prev = p_head->prev;
			free(p_temp);
			return (1);
		}
		counter++;
		p_head = p_head->next;
	}
	return (0);
}
