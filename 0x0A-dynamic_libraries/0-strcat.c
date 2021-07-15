#include "holberton.h"
/**
* _strcat - linking two strings
* @dest: string to be linked
* @src: string to be linked
*Return: 0
*/
char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (start);
}