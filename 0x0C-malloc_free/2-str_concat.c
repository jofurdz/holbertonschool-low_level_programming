#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * str_concat - concatenates strings
 *
 * @s1: string to be linked
 * @s2: string to be linked
 *
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	char *blah;
	int length1 = 0, length2 = 0, p, x;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[length1])
	{
		length1++;
	}
	while (s2[length2])
	{
		length2++;
	}
	blah = malloc(length1 + length2 + 1);

	if (blah == NULL)
	{
		return (NULL);
	}
	for (p = 0; s1[p] != '\0'; p++)
	{
		blah[p] = s1[p];
	}
	for (x = 0; s2[x] != '\0'; x++)
	{
		blah[p + x] = s2[x];
	}
	return (blah);
}
