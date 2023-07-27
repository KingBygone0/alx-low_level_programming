#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * _strnlen - Returns the length of a string.
 * @s: The string to count.
 * Return: The length of the string.
 **/
int _strnlen(const char *s)
{
	int a;

	if (s == NULL)
		return (0);
	for (a = 0; s[a] != '\0'; a++)
		;
	return (a);
}

/**
 * add_node_end - Adds a new node at the end of the linked list.
 * @head: The address of the beginning of the linked list.
 * @str: The string to add to the new node.
 *
 * Return: The address of the new element, NULL if failed.
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *next;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strnlen(str);
	new->next = NULL;

	next = *head;

	if (next == NULL)
	{
		*head = new;
		return (new);
	}

	while (next->next != NULL)
		next = next->next;

	next->next = new;
	return (new);
}
