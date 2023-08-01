#include "lists.h"

/**
 * add_nodeint_end - A function that adds node to end of linked list
 * @head: A pointer to pointer of the head node of linked list
 * @n: The data to be inserted in new element
 * Return:  A pointer to new node
 *       :  NULL if memory allocation fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
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
