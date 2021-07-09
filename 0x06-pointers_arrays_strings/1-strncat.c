#include "holberton.h"
/**
* _strncat - linking two strings
* @dest: destination
* @src: source
* @n: int to be printed
*Return: 0
*/
char *_strncat(char *dest, char *src, int n)
{
char *start = dest;
int i;

while (*dest != '\0')
{
	dest++;
}
for (i = 0; i < n && *src != '\0'; i++)
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';
return (start);
}
