#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - frees list
 *
 * @head: the list
 *
 *Return: void
 */

void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free_listint(head->next);
		free(head);
	}
}
