#include "holberton.h"
#include <string.h>
/**
 *
 *
 *
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
