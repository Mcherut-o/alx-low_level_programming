#include "lists.h"

/**
 * pop_listint - A function that deletes head node of linked list 
 * @head: A pointer to pointer to the head node of linked list
 * Return: Head node's data that was deleted
 *       : 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *current_node;
	int ct;

	if (!head || !*head)
		return (0);


	ct = (*head)->n;
	current_node = (*head)->next;
	free(*head);
	*head = current_node;

	return (ct);
}
