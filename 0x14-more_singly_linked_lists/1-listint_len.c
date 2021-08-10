#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in the list
 *
 * @h: lsit to be printed
 *
 *Return: the number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	int x = 0;

	while (h != NULL)
	{
		x++;
		h = h->next;
	}
	return (x);
}
