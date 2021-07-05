#include "holberton.h"
/**
* puts2 - prints every other character of a string
*
* @str: string to be printed
*/
void puts2(char *str)
{
while (*str)
{
str++;
str++;
_putchar (*str);
}
_putchar('\n');
}
