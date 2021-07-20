#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be allocated
 *
 *Return: 0
 */
char *_strdup(char *str)
{
	char *x;
	char *p;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len])
		len++;
	x = malloc(len + 1);
	if (x == NULL)
	{
		return (NULL);
	}
	p = x;
	while (*str)
		*p++ = *str++;
	*p = '\0';
	return (x);
}
