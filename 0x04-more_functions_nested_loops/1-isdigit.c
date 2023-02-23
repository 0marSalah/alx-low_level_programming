#include "main.h"

/**
* _isupper - returns 1 if uppercase alphabet and 0 otherwise
* @c: takes in a character
* Return: 0 for uppercase, 1 for lowercase
**/
int _isupper(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
