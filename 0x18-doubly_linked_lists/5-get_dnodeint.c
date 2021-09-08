#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 *
 * @head: the head
 * @index: index
 *Return: nth node or NULL upon failure
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int tmp = 0;
	dlistint_t *blah;

	blah = head;
	if (head == NULL)
	{
		return (NULL);
	}
	while (tmp <= index)
	{
		if (blah->next == NULL && tmp != index)
		{
			return (NULL);
		}
		else if (tmp == index)
		{
			return (blah);
		}
		else
		{
			tmp++;
			blah = blah->next;
		}
	}
	return (blah);
}
