#include "lists.h"

/**
 * print_list - Prints all the elements in a singly linked list.
 * @h: Pointer to the first node of the list.
 * Return: size_t type; The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t lg = 0;

	while (h)
	{
		h->str ? printf("[%d] %s\n", h->len, h->str) : printf("[0] (nil)\n");
		h = h->next;
		lg++;
	}
	return (lg);
}
