#include "holberton.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: char to be printed
 * @c: char to be printed
 *Return: 0
 */
char *_strchr(char *s, char c)
{
for (;; s++)
{
if (*s == c)
{
return (s);
}
if (!*s)
{
return (NULL);
}
return (NULL);
}