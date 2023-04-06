#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * sum_dlistint - Function to sum elements
 * @head: Pointer to the doubly linked list
 *
 * Sums all the elements of the doubly linked list
 *
 * Return: The sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *p_head = head;
	int sum = 0;

	if (head)
	{
		while (p_head)
		{
			sum += p_head->n;
			p_head = p_head->next;
		}
		return (sum);
	}
	return (0);
}
