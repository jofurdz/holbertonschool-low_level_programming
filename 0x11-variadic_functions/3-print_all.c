#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * prints_all - prints anything
 *
 * @format: types of arguments passed to the function
 *
 *Return: void
 */
void print_all(const char *const format, ...)
{   int x = 0, i, p;
	char *string;
	va_list blah;

	va_start(blah, format);
	while (format != NULL && format[x] != '\0')
	{   i = 0;
		switch (format[x])
		{ case 'c':
			printf("%c", va_arg(blah, int));
			break;
		case 'i':
			printf("%d", va_arg(blah, int));
			break;
		case 'f':
			printf("%f", va_arg(blah, double));
			break;
		case 's':
			string = va_arg(blah, char *);
			if (string == NULL)
			{ printf("(nil");
				break; }
			printf("%s", string);
			break;
		default:
			i = 1;
			break; }
		p = x + 1;
		while (i != 1 && format[p] != '\0')
		{
			switch (format[p])
		    { case 'c': case 'i': case 'f': case 's':
			{	printf(", ");
				i = 1;
				break; }
			default:
				break; }
			p++; }
		x++;
	}
	printf("\n");
	va_end(blah); }
