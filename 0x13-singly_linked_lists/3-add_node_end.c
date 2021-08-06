#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_node_end - adds a new node to the end of a list
 *
 * @head: pointer to the list
 * @str: string to be listed
 *
 *Return: the address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *node;
	unsigned int x;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{return (NULL); }
	if (str == NULL)
	{
		new_node->str = NULL;
		new_node->len = 0;
	}
	else
	{
		new_node->str = strdup(str);
	}
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (x = 0; str[x] != '\0'; x++)
	{}
	new_node->len = x;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		node = (list_t *)*head;
		while (node->next != NULL)
		{
			node = node->next;
		}
		node->next = new_node;
	}
	return (new_node);
}
