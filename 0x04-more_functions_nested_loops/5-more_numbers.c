#include "holberton.h"
/**
* more_numbers - printing to 14 10 times
*Return: 0
*/
void more_numbers(void)
{
int x = 0;
while (x++ <= 9)
{
for (x = 0; x <= 14; x++)
{
_putchar ((x/10) + '0');
if (x > 9)
_putchar ((x%10) + '0');
}
_putchar ('\n');
}
}
