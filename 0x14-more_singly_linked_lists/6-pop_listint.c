#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node
 *
 * @head: list to be printed
 *
 *Return: head node's data
 */

int pop_listint(listint_t **head)
{
	int x = 0;
	listint_t *node = NULL;

	if (*head == NULL)
	{
		return (0);
	}
	node = (*head)->next;
	x = (*head)->n;
	free(*head);
	*head = node;

	return (x);
}
