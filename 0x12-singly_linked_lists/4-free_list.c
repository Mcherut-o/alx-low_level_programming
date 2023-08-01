#include <stdlib.h>
#include "lists.h"

/**
 * free_list - A function that frees linked list with strings it contains
 * @head: A Pointer to first node of list to be freed
 */

void free_list(list_t *head)
{
	list_t *current_node;

	while (head)
	{
		current_node = head->next;
		free(head->str);
		free(head);
		head = current_node;
	}
}
