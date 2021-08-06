#include "lists.h"
#include <stdio.h>
/**
 * add_node - adds a new node to the start of a list
 *
 * @head: pointer to the list
 * @str: str to be listed
 *
 *Return: the address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int x;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *head;
	}
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
	{
	}
	new_node->len = x;
	*head = new_node;
	return (*head);
}
