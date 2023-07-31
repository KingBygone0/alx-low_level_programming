#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a linked list
 * @head: head of a list.
 * @n: n element
 *
 * Return: address of the new element. NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (head == NULL)
	{
		return (NULL);
	}

	if (new_node == NULL)
	{
		return (NULL);
	}
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
	return (new_node);
}
