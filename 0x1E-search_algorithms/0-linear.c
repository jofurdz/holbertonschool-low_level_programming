#include "search_algos.h"
/**
 * linear_search - searches for value in array of ints
 * @array: array to be searched
 * @size: size of array
 * @value: value to search for
 * Return: value or -1 if NULL
 *
 */
int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
		return (-1);
	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%lu] = [%x]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}
	return (-1);
}
