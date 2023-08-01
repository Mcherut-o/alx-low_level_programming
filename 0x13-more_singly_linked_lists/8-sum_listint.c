#include "lists.h"

/**
 * sum_listint - A function that that returns the sum
 *         of all the data (n) of a listint_t linked list
 * @head: A pointer to head node of listint_t linked list
 * Return: If list is empty - 0
 *       :  Otherwise, total sum of all the data
 */

int sum_listint(listint_t *head)
{
	int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
