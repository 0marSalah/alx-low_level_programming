#include "main.h"

/**
* _puts - prints a string
* @str: char
* Return: string
**/

void print_rev(char *s)
{
char rev[sizeof(*s)];
int i;
for (i = 0; i < sizeof(*s); i++)
{
rev[i] = s[sizeof(*s) - i];
_putchar(rev[i]);
}
_putchar('\n');
}
