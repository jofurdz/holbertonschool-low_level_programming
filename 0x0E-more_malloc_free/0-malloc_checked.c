#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - allocated memory using malloc
 *
 * @b: int to be allocated
 *
 * Return: x
 */
void *malloc_checked(unsigned int b)
{
	char *x;

	x = malloc(b);

	if (x == NULL)
	{
		exit(98);
	}
	return (x);
}
