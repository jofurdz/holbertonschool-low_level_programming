#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * clear_bit - sets value of bit to 0 at given index
 *
 * @n: bit to be printed
 * @index: index to be cleared
 *
 *Return: -1 if it fails and 1 on success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = *n & (~(1 << index));
	return (1);
}
