#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a list
 *
 * @head: list to be printed
 * @n: int to be printed
 *
 *Return: address of the new element, else, NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *endnode = (*head);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		(*head) = new_node;
		return (*head);
	}
	while (endnode->next != NULL)
	{
		endnode = endnode->next;
	}
	endnode->next = new_node;

	return (new_node);
}
