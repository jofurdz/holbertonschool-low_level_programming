#include "holberton.h"
#include <string.h>
/**
 *
 *
 *
 */
char *_strstr(char *haystack, char *needle)
{
size_t n = strlen(needle);
    while(*haystack)
        if(!memcmp(haystack++,needle,n))
            return (char *) (haystack-1);
    return 0;
}
