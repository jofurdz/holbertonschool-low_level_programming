#include "holberton.h"
/**
 * *string_toupper - changes all lowercase to uppercase
 * @str: string to be printed
 *Return: 0
*/
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
		if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 'a' + 'A';
	}
	}
	return (str);
}
