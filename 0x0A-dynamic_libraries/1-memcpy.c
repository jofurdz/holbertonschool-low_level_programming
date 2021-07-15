#include "holberton.h"
/**
 * _memcpy - copies memory area
 * @dest: char to be printed
 * @src: char to be printed
 * @n: int to be printed
 *Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}