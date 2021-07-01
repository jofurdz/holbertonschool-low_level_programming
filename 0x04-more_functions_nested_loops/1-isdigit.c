#include "holberton.h"
/**
* _isdigit - checking for a digit
* @c: number to be printed
*
*Return: 0
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
