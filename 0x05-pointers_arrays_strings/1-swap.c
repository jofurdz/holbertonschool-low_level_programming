#include "holberton.h"
/**
* swap_int - swaps value of integers
* @a: integer to be swapped
* @b: integer to be swapped
*/
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
