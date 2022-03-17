#include "search_algos.h"
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

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}
