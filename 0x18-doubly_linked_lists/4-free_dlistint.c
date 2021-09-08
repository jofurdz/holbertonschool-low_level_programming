#include "lists.h"

/**
 * free_dlistint - frees a dlistint
 *
 * @head: the head
 *Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	if (head == NULL)
	{
		return;
	}
	while (tmp)
	{
		if (tmp->prev != NULL)
		{
			free(tmp->prev);
		}
		if (tmp->next == NULL)
		{
			free(tmp);
			return;
		}
		else
		{
			tmp = tmp->next;
		}
	}
}
