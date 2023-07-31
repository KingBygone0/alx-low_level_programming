#include "lists.h"
#include <stdio.h>


/**
 * print_listint - prints all the elements of a list.
 * @head: head of a list.
 *
 * Return: numbers of nodes.
 */


size_t print_listint(const listint_t *head)
{
	size_t count = 0;

	const listint_t *current = head;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
