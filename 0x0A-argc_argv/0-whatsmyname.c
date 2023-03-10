#include "main.h"

int main(int argc, char argv)
{
  char name = argv[0];
  int i;
  for (i = 0; name[i] != "\0"; i++)
  {
    _putchar(name[i])
  }
  _putchar('\n');
  return (0);
}