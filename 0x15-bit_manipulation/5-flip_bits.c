#include "holberton.h"
#include <stdio.h>

/**
 * countSetBits - counts bits to be set
 *
 * @n: bit to be reset
 *
 *Return: count
 */

int countSetBits(int n)
{
	unsigned int count = 0;

	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}
	return (count);
}

/**
 * flip_bits - flips bits
 *
 * @n: bits to be reset
 * @m: index to be flipped
 *
 *Return: -1 on failure and 1 on success
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (countSetBits(n ^ m));
}
