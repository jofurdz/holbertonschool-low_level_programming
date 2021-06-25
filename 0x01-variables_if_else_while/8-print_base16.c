#include <stdio.h>
/**
* main - printing the alphabet in lowercase
*Return: 0
*/
int main(void)
{
int x;
char p;
for (x = '0'; x <= '9'; x++)
{
putchar(x);
}
for (p = 'A'; p <= 'F'; p++)
{
putchar(p);
putchar('\n');
}
return (0);
}
