#include "holberton.h"
#include <stdio.h>
/**
* print_array - prints elements of an array of integers
*
* @a: int to be printed
* @n: int to be printed
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n - 1; i++)
{
printf("%d, ", a[i]);
}
printf("%d\n", a[i]);
}
