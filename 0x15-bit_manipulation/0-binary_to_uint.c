#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - converts binary to unsigned int
 *
 * @b: pointer to a string (binary)
 *
 *Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val;

	for (val = 0; *b; b++)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		if (*b == '1')
			val = (val << 1) | 1;
		else if (*b == '0')
			val <<= 1;
		else
			break;
	}

	return (val);
}
