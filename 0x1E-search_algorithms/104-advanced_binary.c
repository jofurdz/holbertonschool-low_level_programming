#include "search_algos.h"
/**
 * advanced-binary - does binary search
 * @array: array to be searched
 * @size: size of array
 * @value: value to  be  found
 * Return: value or -1 if NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
	{
		return (-1);
	}
	return (binary_search(array, size - 1, value));
}
/**
 * binary_search - searches for value in an array of ints
 * @array: array to be searched
 * @size: size of array
 * @value: value to search for
 * Return: value or -1 if NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int middle = 0;

	if (array == NULL)
		return (-1);
	for (; left <= right; )
	{
		printf("Searching in array: ");
		print_array(&array[left], right - left + 1);
		middle = (left + right) / 2;
		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}
	return (-1);
}
