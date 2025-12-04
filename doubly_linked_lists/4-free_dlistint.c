#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees all the elements in a list from the dynamic memory.
 * @head: Pointer to the first node of the list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next_node;
	dlistint_t *actual_node;

	if (!head)
		return;
	actual_node = head;
	while (actual_node)
	{
		next_node = actual_node->next;
		free(actual_node);
		actual_node = next_node;
	}
}
