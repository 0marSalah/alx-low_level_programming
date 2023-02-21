#include <main.h>

/**
 * print_alphabet_x10 - Print alphabet in lowercase 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
  int i;
  for (i = 0; i < 10; i++) {
    char c = 'a';
    while (c <= 'z')
    {
      putchar(c);
      c++;
    }
    putchar('\n');
  }

    return (0);
}
