#include "holberton.h"
/**
 *
 *
 *
 */
char *_strpbrk(char *s, char *accept)
{
	if((s == NULL) || (accept == NULL))
        return NULL;
    while(*s)
    {
        if(strchr(accept, *s))
        {
            return s;
        }
        else
        {
            s++;
        }
    }
    return NULL;
}
