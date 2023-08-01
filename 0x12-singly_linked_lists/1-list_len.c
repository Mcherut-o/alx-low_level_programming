#include <stdlib.h>
#include "lists.h"

/**
 * list_len - A function returning number of elements in a linked list
 * @h: A pointer to the head node of the linked list
 * Return: The number of elements in the linked list 
 */

size_t list_len(const list_t *h)
{
	size_t ct = 0;

	while (h != NULL)
	{
		ct++;
		h = h->next;
	}
	return (ct);
}
