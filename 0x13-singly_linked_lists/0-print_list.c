#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all elements of a list
 *
 * @h: list to be printed
 *
 *Return: number of nodes
 */
size_t print_list(const list_t *h)
{
list_t *tmp = (list_t *)h;
int x = 0;

while (tmp != NULL)
{
	if (tmp->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%u] %s\n", tmp->len, tmp->str);
	}
	tmp = tmp->next;
	x++;
}
return (x);
}
