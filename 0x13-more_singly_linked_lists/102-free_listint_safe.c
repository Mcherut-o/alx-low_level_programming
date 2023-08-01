#include "lists.h"
#include <stdio.h>

size_t nod_counter(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * nod_counter - A function that counts number of nodes
 *                      in a looped Linked list
 * @head: A pointer to head node of linked list
 * Return: 0,If the list is not looped
 *       : Otherwise,number of nodes in list
 */

size_t nod_counter(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
	{
		return (0);
	}

	tortoise = head->next;
	hare = (head->next)->next;
	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
				hare = hare->next;
			}

			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
			}

			return (nodes);
		}

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - A function that frees a linked list
 * @h: A pointer to pointer to head node of linked list
 * Return: Size of list that is to be freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current;
	size_t loop_nodes, indx;

	loop_nodes = nod_counter(*h);

	if (loop_nodes == 0)
	{
		for (; h != NULL && *h != NULL; loop_nodes++)
		{
			current = (*h)->next;
			free(*h);
			*h = current;
		}
	}

	else
	{
		for (indx = 0; indx < loop_nodes; indx++)
		{
			current = (*h)->next;
			free(*h);
			*h = current;
		}

		*h = NULL;
	}

	h = NULL;

	return (loop_nodes);
}
