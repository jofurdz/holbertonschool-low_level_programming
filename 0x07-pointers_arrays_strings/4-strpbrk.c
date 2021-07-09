#include "holberton.h"
#include <string.h>
/**
 * _strpbrk - searching a string for any set of bytes
 * @s: string to be searched
 * @accept: char to be printed
 *Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
if ((*s == '\0') || (*accept == '\0'))
return ('\0');
while (*s)
{
if (strchr(accept, *s))
{
return (s);
}
else
{
s++;
}
}
return ('\0');
}
