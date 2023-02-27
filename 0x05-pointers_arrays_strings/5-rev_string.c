#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: pointer to a string
 * Return: void
**/
void print_rev(char *s)
{
	int i;
	for (i = 0; i < _strlen(s - 1); i++)
	{
		s[i] = s[_strlen(s)-i];
	}
}
