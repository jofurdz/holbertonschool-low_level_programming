#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an int
 *
 * @array: poop
 * @size: size of the array
 * @cmp: pointer to function
 *
 *Return: -1 or 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}

	for (x = 0; x < size; x++)
	{
		if ((*cmp)(array[x]) == 1)
		{
			return (x);
		}
	}
	return (-1);
}
