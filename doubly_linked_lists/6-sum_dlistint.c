#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - Sums all the integers from a list.
 * @head: Pointer to the first node of the list.
 * Return: Integer, sum of the list.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *actual_node;
	int sum = 0;

	if (!head)
		return (0);
	actual_node = head;
	while (actual_node)
	{
		sum += actual_node->n;
		actual_node = actual_node->next;
	}
	return (sum);
}
