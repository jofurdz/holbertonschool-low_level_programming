#include <stdio.h>
/**
* main - displaying the alphabet in upper and lowercase
*Return: 0
*/
int main(void)
{
char x;
char p;
for (x = 'a'; x <= 'z'; x++)
{
putchar(x);
}
for (p = 'A'; p <= 'Z'; p++)
{
putchar(p);
}
putchar('\n');
return (0);
}
