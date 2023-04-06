#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * print_list - Function to print elements of a linked list
 * @h: Pointer to the linked list
 *
 * Prints all the elements of a linked list
 *
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;
	const list_t *temp = h;

	while (temp)
	{
		printf("%s", temp->str);
		temp = temp->next;
		counter++;
	}
	return (counter);
}

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

/**
 * print - Function to print elements of a linked list
 *
 * Prints a string
 *
 * Return: Void
 */

void print(void)
{
	list_t *head = NULL;

	add_node_end(&head, "You're ");
	add_node_end(&head, "beat! ");
	add_node_end(&head, "and ");
	add_node_end(&head, "yet, ");
	add_node_end(&head, "you ");
	add_node_end(&head, "must ");
	add_node_end(&head, "allow,\n");
	add_node_end(&head, "I ");
	add_node_end(&head, "bore ");
	add_node_end(&head, "my ");
	add_node_end(&head, "house ");
	add_node_end(&head, "upon ");
	add_node_end(&head, "my ");
	add_node_end(&head, "back!\n");
	print_list(head);
	free_list(head);
	head = NULL;
}
