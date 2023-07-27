#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * list_len - Counts the member of nodes in a linked list.
 * @h: A pointer to the head of the linked list.
 * Return: The number of nodes in the linked list.
 **/
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);
	if (h->next != NULL)
		return (list_len(h->next) + 1);
	return (1);
}
