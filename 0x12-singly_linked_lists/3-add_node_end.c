#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - A function that adds new node at end of a linked list
 * @head: A double pointer to the head of linked list
 * @str: A string to put in New node
 * Return: The address of new element
 *       : NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current_node = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (current_node->next)
		current_node = current_node->next;

	current_node->next = new_node;

	return (new_node);
}
