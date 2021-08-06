#include "lists.h"
#include <stdio.h>
/**
 * list_len - returns the number of elements in a linked list
 *
 * @h: list to be printed
 *
 *Return: number of elements
 */
size_t list_len(const list_t *h)
{
list_t *tmp = (list_t *)h;
int count = 0;

while (tmp != NULL)
{
	count++;
	tmp = tmp->next;
}
return  (count);
}
