#include "holberton.h"
/**
* _isupper - checks for uppercase letter
* @c: returning 1 if upper
*
*Return: 0
*/
int _isupper(int c)
{
if (c > 'A' && c < 'Z')
return (1);
else
return (0);
}
