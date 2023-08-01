#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - A function to add new node at beginning of linked list
 * @head: A double pointer to the head node of the linked list
 * @str: A new string to be added in the node
 * Return: Address of the new element
 *       :  NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
