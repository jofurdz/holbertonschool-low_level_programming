#include "holberton.h"
/**
 * _memset - fills the memory with a constant byte
 * @s: string
 * @b: char
 * @n: int
 *Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
char *p = s;
*s = b;
while (n > 0)
{
*s = b;
s++;
n--;
}
return (p);
}
