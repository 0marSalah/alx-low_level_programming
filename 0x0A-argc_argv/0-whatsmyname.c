#include "main.h"

int main(int argc, char *argv[])
{
  char *name = argv[0];
  int i = 0;
  while (name[i] != '\0')
  {
    _putchar(name[i]);
    i++;
  }
  _putchar('\n');
  return (0);
}