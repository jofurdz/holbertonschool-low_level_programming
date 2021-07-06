#include "holberton.h"
/**
* rev_string - reverses a string
*
* @s: string to be reversed
*/
void rev_string(char *s)
{
int length = 0;
int i;
while (*s)
{
s++;
length++;
}
s -= length;
for (i = 0; i < length / 2; i++)
{
char temp = s[i];
s[i] = s[length - 1 - i];
s[length - 1 - i] = temp;
}
}
