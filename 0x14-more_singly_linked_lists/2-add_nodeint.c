#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - adds a node at the beginning of a list
 *
 * @head: pointer to list
 * @n: int to be listed
 *
 *Return: the address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = (*head);

	(*head) = new_node;

	return (new_node);
}
