#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a node at the end of a linked list.
 * @head: Pointer to the first node of the list.
 * @n: Integer to add in the node.
 * Return: Pointer to the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *actual_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (0);
	new_node->n = n;
	actual_node = *head;
	if (!actual_node)
	{
		*head = new_node;
		return (new_node);
	}
	while (actual_node->next)
		actual_node = actual_node->next;
	actual_node->next = new_node;
	new_node->prev = actual_node;
	return (new_node);
}
