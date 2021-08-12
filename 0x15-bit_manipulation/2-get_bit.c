#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: bit to be printed
 * @index: index of the bit to be printed
 *
 *Return: the value of bit at index 
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
	{
		return (-1);
	}
	n = n >> index;
	return (1 & n);
}
