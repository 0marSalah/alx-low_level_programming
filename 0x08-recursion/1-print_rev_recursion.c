#include "main.h"

/**
* _puts_recursion -  a function that prints a string in reverse.
* @s: pointer to array of char
* Return: print string to output
**/

void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s+1);
_putchar(*s);
}
}
