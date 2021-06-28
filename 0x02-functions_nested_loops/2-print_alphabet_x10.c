#include "holberton.h"
/**
* main - printing alphabet 10 times
*Return: 0
*/
void print_alphabet_x10(void)
{
char x;
while(x <= 10);
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
return (0);
}
