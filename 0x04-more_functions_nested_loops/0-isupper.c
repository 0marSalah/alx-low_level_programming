#include "main.h"
/**
* _isupper - returns 1 if uppercase alphabet and 0 otherwise
* @c: takes in a character
* Return: 0 for uppercase, 1 for lowercase
**/
int _isupper(int c)
{
  if (c >= 'a' && c <= 'z')
  return (0);
  else
  return (1);
}
