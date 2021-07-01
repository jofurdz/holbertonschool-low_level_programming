#include "holberton.h"
/**
* print_numbers - printing 0-9 followed by a new line
*
*Return: void
*/
void print_numbers(void)
{
int x;
for (x = '0'; x <= '9'; x++)
{
_putchar (x);
}
_putchar ('\n');
}
