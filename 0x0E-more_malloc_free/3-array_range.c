#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - creates an array of integers
 *
 * @min: minimum number of integers
 * @max: maximum number of integers
 *
 *Return: x
 */
int *array_range(int min, int max)
{
	int x, *blah;

	if (min > max)
	{
		return (NULL);
	}
	blah = malloc(((max - min) + 1) * sizeof(int));

	if (blah == NULL)
	{
		return (NULL);
	}
	for (x = 0; min <= max; x++)
	{
		blah[x] = min;
		min++;
	}
	return (blah);
}
