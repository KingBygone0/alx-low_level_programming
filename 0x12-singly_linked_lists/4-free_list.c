#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * free_list - Frees a list_t linked list.
 * @head: Pointer to the head of the linked list
 *
 * Return: Nothing;
 **/
void free_list(list_t *head)
{
	list_t *next;

	while (head != NULL)
	{
		if (head->str != NULL)
			free(head->str);
		next = head->next;
		free(head);
		head = next;
	}
}
