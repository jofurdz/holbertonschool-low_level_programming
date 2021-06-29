#include "holberton.h"
/**
* print_last_digit - printing the last digit of a number
* @n: the character to print
*
*Return: 0
*/
int print_last_digit(int n)
{
int x = n % 10;
if (x < 0)
x *= -1;
_putchar (x + 0);
return (x);
}
