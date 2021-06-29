#include "holberton.h"
/**
*
*
*/
void times_table(void)
{
int x;
int p;
int multi;
for (x = 0; x < 10; x++)
{
multi = x * p;
for (p = 0; p < 10; p++)
{
_putchar(multi);
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
}
