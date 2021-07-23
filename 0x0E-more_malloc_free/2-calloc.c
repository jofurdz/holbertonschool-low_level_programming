#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _calloc - allocated memory for an array
 * 
 * @nmemb:
 * @size:
 * 
 *Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	char *blah;
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	blah = malloc(nmemb * size);

	if (blah == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < (nmemb * size); x++)
	{
		blah[x] = '\0';
	}
	return (blah);
}
