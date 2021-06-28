#include "holberton.h"
/**
* _islower - checking for lowercase character
* @c: returning 1 if lower
*
*Return: 0
*/
int _islower(int c)
{
if (c > 'a' && c < 'z')
return (1);
else
return (0);
}
