#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * Return: nothing
 */

void print_triangle(int size)
{
int i, j;
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
if ((i + j) <= size) 
{
printf(" ");
} 
else 
{
printf("*");
}
}
printf("\n");
}
}
