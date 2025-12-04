#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * free_list - Frees a signly linked list.
 * @head: Pointer to the first node of the list.
 */
void free_list(list_t *head)
{
	list_t *next_node;
	list_t *actual_node;

	if (!head)
		return;
	actual_node = head;
	while (actual_node->next)
	{
		next_node = actual_node->next;
		free(actual_node->str);
		free(actual_node);
		actual_node = next_node;
	}
	free(actual_node->str);
	free(actual_node);
}
