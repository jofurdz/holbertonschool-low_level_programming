#include "holberton.h"
/**
* _isalpha - checking for alphabetic character
* @c: returning 1 if lower
*
*Return: 0
*/

int _isalpha(int c)
{
if ((c > 'a' && c < 'z') ||
(c > 'A' && c < 'Z'))
return (1);
else
return (0);
}
