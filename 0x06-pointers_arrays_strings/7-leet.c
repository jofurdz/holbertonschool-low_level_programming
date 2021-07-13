#include "holberton.h"
/**
 * leet - encodes a string into 1337
 *
 * @a: char to be printed
 * @tobrepl: char to be replaced
 * @replcr: char replacing
 *
 *Return: 0
 */
char *replc_char(char *a, char tobrepl, char replcr);

char *leet(char *str)
{
	str = replc_char(str, 'a', '4');
	str = replc_char(str, 'A', '4');
	str = replc_char(str, 'e', '3');
	str = replc_char(str, 'E', '3');
	str = replc_char(str, 'o', '0');
	str = replc_char(str, 'O', '0');
	str = replc_char(str, 't', '7');
	str = replc_char(str, 'T', '7');
	str = replc_char(str, 'l', '1');
	str = replc_char(str, 'L', '1');
	return (str);
}
char *replc_char(char *a, char tobrepl, char replcr)
{
	int length = 0;

	while (*a)
	{
		if (*a == tobrepl)
		{
			*a = replcr;
		}
		a++;
		length++;
	}
	a -= length;
	return (a);
}
