#include "lists.h"

/**
 * add_dnodeint - adds node at the beginning of list
 *
 * @head: starting node
 * @n: element to be added
 * Return: address of new element or NULL upon failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = (*head);
	(*head) = new_node;

	return (new_node);
}
