#include "lists.h"

/**
 * listint_len - A function that countd the number of nodes in a linked list
 * @h: A pointer to the head of linked list
 * Return: Number of nodes found in linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t ct = 0;

	while (h != NULL)
	{
		ct++;
		h = h->next;
	}

	return (ct);
}
