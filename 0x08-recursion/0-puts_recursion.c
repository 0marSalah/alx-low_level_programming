#include "main.h"

/*
* _puts_recursion: a function that prints a string, followed by a new line.
* @s: the string to be printed
*/

void _puts_recursion(char *s)
{
  if (*s == "\0")
  {
    printf('\n');
    return;
  }
  printf("%c", *s);
  s++;
  _puts_recursion(s);
}
