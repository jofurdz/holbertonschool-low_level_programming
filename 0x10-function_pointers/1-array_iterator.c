#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executess a function given as a parameter on each element
 *
 * @array: name of our array
 * @size: size of our array
 * @action: pointer to our function
 *
 *Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (action == NULL || array == NULL)
	{
		return;
	}

	for (x = 0; x < size; x++)
	{
		(*action)(array[x]);
	}
}
