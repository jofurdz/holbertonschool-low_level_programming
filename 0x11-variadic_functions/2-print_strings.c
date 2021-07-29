#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings -prints strings
 *
 * @separator: the string to be printed between strings
 * @n: number of strings passed through the function
 *
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;

	va_list blah;
	va_list yeet;

	va_start(blah, n);
	va_start(yeet, n);

	for (x = 0; x < n; x++)
	{
		if (va_arg(yeet, char *) == NULL)
		{
			printf("(nil)");
			va_arg(blah, char *);
		}
		else
		{
			printf("%s", va_arg(blah, char *));
		}
		if (separator != NULL && x != (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(blah);
	va_end(yeet);
	printf("\n");
}
