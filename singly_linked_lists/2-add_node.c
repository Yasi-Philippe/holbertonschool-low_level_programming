#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Adds a new node to the beginning of a list.
 * @head: Pointer to the first node of the list.
 * @str: String to store in the node.
 * Return: size_t type pointer
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int lgt = 0;

	while (str[lgt])
		lgt++;
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (0);
	new_node->str = malloc(lgt + 1);
	if (!new_node->str)
	{
		free(new_node);
		return (0);
	}
	new_node->str = strdup(str);
	new_node->len = lgt;
	new_node->next = *head;
	head = new_node;
	return (new_node);
}
