#include "holberton.h"
/**
* reverse_array - reverses array of integers
* @a: int to be printed
* @n: int to be printed
*/
void reverse_array(int *a, int n)
{
	int low;
	int high;
for (low = 0, high = n - 1; low < high; low++, high--)
{
int temp = a[low];
a[low] = a[high];
a[high] = temp;
}
}
