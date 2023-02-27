#include "main.h"

/**
* rev_string - reverses a string
* @s: char
* Return: string
**/
void rev_string(char *s)
{
int i = 0;
int j;

while (s[i] != '\0' && i % 2 == 0)
{
_putchar(s[i]);
i++;
}
}
