#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Sums all the integers from a list.
 * @h: Pointer to the first node of the list.
 * @idx: Index to insert the node in.
 * @n: Integer to save on the new node.
 * Return: A pointer to the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *actual_node;
	unsigned int i;

	actual_node = *h;
	for (i = 0; i < idx; i++)
	{
		if (!actual_node->next)
			return (0);
		actual_node = actual_node->next;
	}
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (0);
	if (!idx)
	{
		new_node->n = n;
		new_node->next = *h;
		new_node->next->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	new_node->n = n;
	new_node->prev = actual_node->prev;
	new_node->next = actual_node;
	new_node->prev->next = new_node;
	actual_node->prev = new_node;
	return (new_node);
}
