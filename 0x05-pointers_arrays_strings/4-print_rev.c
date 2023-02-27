#include "main.h"

/**
* _puts - prints a string
* @str: char
* Return: string
**/

void print_rev(char *s)
{
  int i;
  for (i = _strlen(*s); i >= 0; i--)
  {
    _putchar(*s++);
  }
}
