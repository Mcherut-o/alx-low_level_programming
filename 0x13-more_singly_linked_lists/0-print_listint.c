#include <stdio.h>
#include "lists.h"

/**
 * print_listint - A function that prints all elements of linked list
 * @h: A pointer to the head node of linked list
 * Return: The number of nodes in linked list
 */

size_t print_listint(const listint_t *h)
{
	size_t ct = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		ct++;
		h = h->next;
	}

	return (ct);
}
