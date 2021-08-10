#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_listint - prints all element of a list
 *
 * @h: list to be printed
 *
 *Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int x = 0;

	while (h != NULL)
	{
		x++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (x);
}
