#include "lists.h"

/**
 * add_nodeint - Adds a new node atbeginning of linked list
 * @head: Pointer to a pointer to first node in list
 * @n: The data tobe inserted in new node
 * Return: A pointer to the new node
 *       :  NULL if memory allocation fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
