#include "holberton.h"
/**
* more_numbers - printing to 14 10 times
*Return: 0
*/
void more_numbers(void)
{
int y = 0;
int x;
for (y = 0; y <= 9; y++)
{
for (x = 0; x <= 14; x++)
{
if (x > 9)
_putchar ((x/10) + '0'); 
_putchar ((x%10) + '0');
}
_putchar ('\n');
}
}
