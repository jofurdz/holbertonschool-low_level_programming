#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * sum_them_all - returns the sum of all it's parameters
 *
 * @n: unsigned int
 *Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;

	unsigned int x;
	va_list blah;

	va_start(blah, n);

	if (n == 0)
	{
		return (0);
	}

	for (x = 0; x < n; x++)
	{
		sum += va_arg(blah, int);
	}
	va_end(blah);

	return (sum);
}
