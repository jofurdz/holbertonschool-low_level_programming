#include "holberton.h"
/**
* *_strncpy - copies string
* @dest: string sto be copied
* @src: string to be copied
* @n: int to be printed
*Return: 0
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}
