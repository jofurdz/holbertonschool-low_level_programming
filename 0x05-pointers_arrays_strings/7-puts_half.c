#include "holberton.h"
#include "2-strlen.c"
/**
* puts_half - printing half of a string
*
* @str: string to be printed
*/
void puts_half(char *str)
{
int length = 0, i, mid;
length = _strlen(str);
if (length % 2 == 0)
{
mid = length / 2;
}
else
{
mid = (length + 1) / 2;
}
for (i = mid; i < length; i++)
{
_putchar (str[i]);
}
_putchar ('\n');
}
