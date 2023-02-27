#include "main.h"

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
 * puts2 - prints every other character of a string, starting with the first
 * character, followed by a new line
 * @str: pointer to a string
 * Return: void
**/
void puts_half(char *str)
{
	int i;

	for (i = _strlen(str - 1) / 2; i < _strlen(str - 1); i++)
	if (i % 2 == 0)
		_putchar(str[i]);
	_putchar('\n');
}
