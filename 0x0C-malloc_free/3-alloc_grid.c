#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 *
 * @width: width of array
 * @height: height of array
 *
 * Return: Null if negative else the array
 */
int **alloc_grid(int width, int height)
{
	int **a, i;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	a = malloc(height * sizeof(int *));

	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(a[i]);
			}
			free(a[i]);
			return (NULL);
		}
	}
	return (a);
}
