#include "main.h"

/** 
* _strlen return string length
* @str: string parameter
* return length of string 
**/

int _strlen(char *s)
{
int len = 0;
while (*s++)
  len++;
return len;
}