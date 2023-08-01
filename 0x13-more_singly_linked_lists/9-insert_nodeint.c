#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts a
 *            new node at a given position in the list
 * @head: A pointer to the pointer of head node in list
 * @idx: The index where new node should be added
 * @n: value to be stored in new node
 * Return: The address of new node
 *       : NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current_node;
	unsigned int ct = 0;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current_node = *head;

	while (current_node != NULL && (ct < idx) - 1)
	{
		current_node = current_node->next;
		ct++;
	}

	if (current_node == NULL || current_node->next == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current_node->next;
	current_node->next = new_node;
		return (new_node);
}
