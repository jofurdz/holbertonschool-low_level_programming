#include "holberton.h"
/**
* print_alphabet_x10 - printing alphabet 10 times
*Return: 0
*/
void print_alphabet_x10(void)
{
int x = 0;
char p;
while(x++ <= 9)
{
for (p = 'a'; p <= 'z'; p++)
{
_putchar(x);
}
_putchar('\n');
}
}
