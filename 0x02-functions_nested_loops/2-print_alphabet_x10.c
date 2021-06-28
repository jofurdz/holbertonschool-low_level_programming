#include "holberton.h"
/**
* print_alphabet_x10 - printing alphabet 10 times
*Return: 0
*/
void print_alphabet_x10(void)
{
int x = 0;
char ch;
while (x++ <= 9)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
