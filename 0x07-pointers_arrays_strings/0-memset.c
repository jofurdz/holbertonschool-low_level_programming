#include "holberton.h"
/**
 *
 *
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
  *s = b;
  while(n > 0)
    {
      *s = b;
      s++;
      n--;
    }
  return(s);
}
