#include "main.h"

/**
* _strlen return string length
* @s: string parameter
* return length of string
**/

int _strlen(char *s)
{
int len = 0;
while (*s++)
len++;
return (len);
}
