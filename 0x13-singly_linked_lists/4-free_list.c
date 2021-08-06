#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - frees list
 *
 * @head: list to be freed
 *
 *Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
