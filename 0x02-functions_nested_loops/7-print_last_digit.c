#include "holberton.h"
/**
* print_last_digit - printing the last digit of a number
*
* @n: the character to print
*
*Return: 0
*/
int print_last_digit(int n)
{
int lastDigit = n % 10;
if (lastDigit < 0)
lastDigit *= -1;
_putchar(lastDigit + '0');
return (lastDigit);
}
