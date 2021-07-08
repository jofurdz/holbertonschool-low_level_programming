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
	char* ptr = dest;
		while (*src && n--)
		{
			*dest = *src;
				dest++;
				src++;
		}
	*dest = *src;
	return ptr;
}
