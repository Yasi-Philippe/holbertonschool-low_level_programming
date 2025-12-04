#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - Finds the nth node in a list.
 * @head: Pointer to the first node of the list.
 * @index: Index indicating the required node to return.
 * Return: Pointer to the nth node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *actual_node;
	unsigned int i;

	if (!head)
		return (0);
	actual_node = head;
	for (i = 0; i < index; i++)
	{
		if (!actual_node->next)
			return (0);
		actual_node = actual_node->next;
	}
	return (actual_node);
}
