#include "holberton.h"
/**
 * _strchr - locates a character in a string
 * @s: char to be printed
 * @c: char to be printed
 *Return: 0
 */
char *_strchr(char *s, char c)
{
	char *find = ('\0');

	if (*s != '\0')
	{
		do
		{
			if (*s == c)
			{
				find = s;
				break;
			}
		}

		while (*s++);
	}
	return (find);
}