#include "lists.h"

/**
 * list_len - Counts the nodes in a linked list.
 * @h: Pointer to the first node of the list.
 * Return: size_t type; The number of nodes in the list.
 */
size_t list_len(const list_t *h)
{
	size_t lg = 0;

	while (h)
	{
		h = h->next;
		lg++;
	}
	return (lg);
}
