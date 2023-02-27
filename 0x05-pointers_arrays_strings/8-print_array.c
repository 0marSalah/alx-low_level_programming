#include "main.h"
#include <stdio.h>

/**
* _strlen - function that returns the length of a string.
* @s : s is a character
* Return: value is i
**/

int _strlen(char *s)
{
int len = 0;
while (*s++)
len++;
return (len);
}

/**
 * puts_half - function that prints half of a string, followed by a new line.
 * character, followed by a new line
 * @str: pointer to a string
 * Return: void
**/

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
if (i != (_strlen(a) - 1))
{
printf("%d, ", a[i]);
}
else
{
printf("%d ", a[i]);
}
_putchar('\n');
}
