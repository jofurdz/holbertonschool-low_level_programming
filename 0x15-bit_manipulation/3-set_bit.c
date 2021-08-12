#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * set_bit - sets bit to a given index
 *
 * @n: the bit to be printed
 * @index: index where bit is set
 *
 *Return: -1 on failure and 1 on success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
	{
		return (-1);
	}
	*n = (1 << index) | *n;
	return (1);
}
