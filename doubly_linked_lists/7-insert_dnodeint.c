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
	dlistint_t *previous_add;
	unsigned int i;

	actual_node = *h;
	for (i = 0; i < idx; i++)
	{
		if (!actual_node->next)
			return (0);
		actual_node = actual_node->next;
	}
	previous_add = actual_node->prev;
	new_node = add_dnodeint(&actual_node, n);
	new_node->prev = previous_add;
	return (new_node);
}
