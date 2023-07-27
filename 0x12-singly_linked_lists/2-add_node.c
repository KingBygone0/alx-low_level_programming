#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * _strnlen - Returns the length of a string.
 * @s: The string to count.
 * Return: The lentgh of the string.
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
 * add_node - Add a new node at the beginning of a linked list.
 * @head: Address of the beginning of the linked list.
 * @str: The string to add to new node.
 *
 * Return: A pointer to the new head of the linked list.
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strnlen(str);
	new->next = *head;

	*head = new;
	return (new);
}
