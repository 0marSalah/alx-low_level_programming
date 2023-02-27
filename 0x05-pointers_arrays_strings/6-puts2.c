#include "main.h"

/**
* rev_string - reverses a string
* @s: char
* Return: string
**/
void puts2(char *str)
{
	int i;
	int size = _strlen(str);

	for (i = 0; i < size; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
