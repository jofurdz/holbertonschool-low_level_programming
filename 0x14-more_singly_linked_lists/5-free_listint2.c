#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - frees a list
 *
 * @head: list to be freed
 *
 *Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			node = *head;
			*head = (*head)->next;
			free(node);
		}
		*head = NULL;
	}
}
