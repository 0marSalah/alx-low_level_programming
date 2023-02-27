#include "main.h"

/** 
 * _strlen reurn string length
 * @str: string parameter
 * return always 0 * 
*/

int _strlen(char *s)
{
int len = 0;
while (*s++)
    len++;
return len;
}