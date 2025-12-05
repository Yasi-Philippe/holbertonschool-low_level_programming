#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Adds a node at the beginning of a linked list.
 * @head: Pointer to the first node of the list.
 * @n: Integer to add in the node.
 * Return: Pointer to the beginning of the list.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (0);
	if (!*head)
	{
		new_node->n = n;
		*head = new_node;
		return (new_node);
	}
	new_node->next = *head;
	new_node->n = n;
	new_node->next->prev = new_node;
	*head = new_node;
	return (new_node);
}

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
	previous_add->next = new_node;
	return (new_node);
}
