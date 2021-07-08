#include "holberton.h"
/**
*
*
*
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (int)(unsigned char)(*s1) - (int)(unsigned char)(*s2);
}
