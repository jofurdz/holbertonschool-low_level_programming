#include "holberton.h"
#include <string.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be measured
 * @accept: string to be measured
 *Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	if ((*s == '\0') || (*accept == '\0'))
		return (i);
	while (*s && strchr(accept, *s++))
	{
		i++;
	}
	return (i);
}
