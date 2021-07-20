#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * create_array - creates an array of characters
 * @size: size of pointer
 * @c: char to be printed
 * @i: int to be printed
 *
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(size);

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
