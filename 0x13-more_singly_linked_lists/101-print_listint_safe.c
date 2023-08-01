#include "lists.h"
#include <stdio.h>

size_t loop_detector(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * loop_detector - A function that counts number of nodes
 *                      in a looped Linked list
 * @head: A pointer to head node of linked list
 * Return: 0,If the list is not looped
 *       :  Otherwise,number of nodes in list
 */

size_t loop_detector(const listint_t *head)
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
 * print_listint_safe - A function that prints a linked list
 * @head: A pointer to head node of linked list
 * Return: Number of nodes in list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t loop_nodes, indx = 0;

	loop_nodes = loop_detector(head);

	if (loop_nodes == 0)
	{
		for (; head != NULL; loop_nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (indx = 0; indx < loop_nodes; indx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (loop_nodes);
}
