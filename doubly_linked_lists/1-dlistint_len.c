#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * dlistint_len - Returns the lenght of a list
 * @h: Pointer to the first node of the list.
 * Return: size_t type , number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t lg = 0;

	while (h)
	{
		h = h->next;
		lg++;
	}
	return (lg);
}
