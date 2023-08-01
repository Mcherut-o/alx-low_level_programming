#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns nth node of a linked list
 * @head: Pointer to head node of linked list
 * @index: The index of the node to retrieve (0-indexed)
 * Return: Pointer to the nth node
 *       :  NULL if the node is not found
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current_node = head;

	while (current_node && i < index)
	{
		current_node = current_node->next;
		i++;
	}

	return (current_node ? current_node : NULL);
}
