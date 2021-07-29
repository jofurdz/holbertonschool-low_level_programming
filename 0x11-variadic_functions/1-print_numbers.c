#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers
 *
 * @separator: string to be printed between numbers
 * @n: number of integers passed through the function
 *
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;

	va_list blah;

	va_start(blah, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(blah, int));

		if (separator != NULL && x != n)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(blah);
}
