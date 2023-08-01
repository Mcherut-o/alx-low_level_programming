#include "lists.h"

/**
 * find_listint_loop - Function finding loop in linked list(Floyd's algorithm)
 * @head: Pointer to the head of linked list
 * Return: The address of the node where the loop starts
 *       : NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
    listint_t *tortoise = head, *hare = head;

    while (hare != NULL && hare->next != NULL)
    {
        tortoise = tortoise->next;
        hare = hare->next->next;

        if (tortoise == hare)
        {
            hare = head;
            while (tortoise != hare)
            {
                tortoise = tortoise->next;
                hare = hare->next;
            }
            return (tortoise);
        }
    }

    return (NULL);
}

