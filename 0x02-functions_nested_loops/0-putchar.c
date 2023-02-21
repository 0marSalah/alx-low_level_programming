#include <stdio.h>

/**
 * main - Print "_putchar" followed by a new line.
 * Description: You are not allowed to include standard libraries.
 * Return: 0
 */
int main (void)
{
  char destination[] = "_putchar";

  int i = 0;
  while (destination[i] != '\0')
  {
    putchar(destination[i]);
    i++;
  }
  putchar('\n');
  return (0);
}