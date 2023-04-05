#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - function
 * @s: The string to be evaluated
 * Swap values of two integers
 *
 * Return: Length of a string
 *
 */
int _strlen(const char *s)
{
	int length;

	length = 0;
	while (*(s + length))
		length++;
	return (length);
}

/**
 * add_node_end - Function to add a node
 * @head: Pointer to the linked list
 * @str: The value to be added
 *
 * Adds a new node at the end of the linked list
 *
 * Return: The address of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *p_head = *head;
	int len;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	len = _strlen(str);
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (!(*head))
		(*head) = new_node;
	else
	{
		while (p_head->next)
			p_head = p_head->next;
		p_head->next = new_node;
	}
	return (new_node);
}
