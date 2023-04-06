#include "lists.h"
#include <stdlib.h>


/**
 * free_dlistint - Function to free doubly linked list
 * @head: Pointer to the doubly linked list
 *
 * Frees a doubly linked list
 *
 * Return: Void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head, *lib = head;

	while (temp)
	{
		temp = temp->next;
		free(lib);
		lib = temp;
	}
}
