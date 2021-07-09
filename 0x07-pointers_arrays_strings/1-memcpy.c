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
	int i;
	char *csrc = (char *)src;
	char *cdest = (char *)dest;
	char *temp = new char[n];
	for (int i=0; i<n; i++)
	{
		temp[i] = csrc[i];
	}
	for (int i=0; i<n; i++)
	{
		cdest[i] = temp[i];
	}
}
