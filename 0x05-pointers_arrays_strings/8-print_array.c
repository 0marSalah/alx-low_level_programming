#include "main.h"
#include <stdio.h>

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
if (i == (n - 1))
{
printf("%d ", a[i]);
}
else
{
printf("%d, ", a[i]);
}
printf("\n");
}
