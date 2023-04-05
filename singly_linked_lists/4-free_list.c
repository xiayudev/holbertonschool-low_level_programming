#include "lists.h"
#include <stdlib.h>


/**
 * free_list - Function to free linked list
 * @head: Pointer to the linked list
 *
 * Frees a linked list
 *
 * Return: Void
 */
void free_list(list_t *head)
{
	list_t *temp = head, *lib = head;

	while (temp)
	{
		temp = temp->next;
		free(lib->str);
		free(lib);
		lib = temp;
	}
}
