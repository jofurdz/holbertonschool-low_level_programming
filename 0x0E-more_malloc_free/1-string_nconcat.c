#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * string_nconcat - concatenates a string using malloc
 *
 * @s1: first string
 * @s2: second string
 * @n: unsigned int
 *
 *Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *blah;
	unsigned int p, x, length1 = 0, length2 = 0;

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
	blah = malloc((length1 + n + 1) * sizeof(char));

	if (blah == NULL)
	{
		return (NULL);
	}
	for (p = 0; s1[p] != '\0'; p++)
	{
		blah[p] = s1[p];
	}
	for (x = 0; x < n; x++)
	{
		blah[p + x] = s2[x];
	}
	blah[p + x] = '\0';
	return (blah);
}
