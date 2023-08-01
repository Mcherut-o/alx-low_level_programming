#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes
 * the node at index of a listint_t linked  list
 * @head: A pointer to pointer to the head node of linked list
 * @index: Index of node to unergo deletion
 * Return: (1) On success
 *       : (-1) if failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *prior = *head;
	unsigned int n;

	if (prior == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(prior);
		return (1);
	}

	for (n = 0; n < (index - 1); n++)
	{
		if (prior->next == NULL)
			return (-1);

		prior = prior->next;
	}

	current_node = prior->next;
	prior->next = current_node->next;
	free(current_node);
	return (1);
}
