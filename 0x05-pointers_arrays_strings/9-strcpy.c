#include "holberton.h"
/**
* _strcpy - copies the string, including the null byte
*
* @dest: string to be pointed to
* @src: string to be pointed to
*
*Return: 0
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}