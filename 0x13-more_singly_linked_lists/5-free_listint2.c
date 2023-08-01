#include "lists.h"

/**
 * free_listint2 - A function that frees Linked list
 * @head: A pointer to pointer to head node of list to be freed
 * Return: Void
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node;

	if (head == NULL)
		return;

	while (*head)
	{
		current_node = (*head)->next;
		free(*head);
		*head = current_node;
	}

	*head = NULL;
}
