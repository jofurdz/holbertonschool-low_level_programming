#include "holberton.h"
#include <string.h>
/**
 * _strstr - function that locates a substring
 * @haystack: char to br printed
 * @needle: char to be printed
 *Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
size_t n = strlen(needle);
while (*haystack)
if (!memcmp(haystack++, needle, n))
return ((char *) (haystack - 1));
return (0);
}
