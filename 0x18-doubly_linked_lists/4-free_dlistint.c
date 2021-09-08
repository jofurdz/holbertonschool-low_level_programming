#include "lists.h"

/**
 * 
 * 
 * 
 * 
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		head = head->next;
		free(tmp->prev);
		free(tmp);
	}
}
