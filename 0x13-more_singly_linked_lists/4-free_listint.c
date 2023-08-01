#include "lists.h"

/**
 *  free_listint - A function that frees linked list
 *  @head: Pointer to head node of linked list to be freed
 *  Return: Void
 */

void free_listint(listint_t *head)
{
	listint_t *current_node;

	while (head != NULL)
	{
		current_node = head->next;
		free(head);
		head = current_node;
	}
}
