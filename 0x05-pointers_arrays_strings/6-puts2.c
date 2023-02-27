#include "main.h"

/**
* rev_string - reverses a string
* @s: char
* Return: string
**/
void puts2(char *str)
{
int i = 0;

while (str[i] != '\0' && i % 2 == 0)
{
_putchar(str[i]);
i++;
}
}
