#include "lists.h"

/**
 * print_dlistint - pritns all elements of a dlistint_t list
 *
 * @h: starting node
 *Return: number of elements printed
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
