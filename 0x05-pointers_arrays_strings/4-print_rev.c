#include "holberton.h"
/**
* print_rev - prints a string in reverse
*
* @s: string to be printed
*/
void print_rev(char *s)
{
int length = 0;
while (*s)
{
s++;
length++;
}
while (length >= 0)
{
length--;
_putchar (*s);
s--;
}
_putchar ('\n');

}
