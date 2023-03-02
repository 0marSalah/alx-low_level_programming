#include "main.h"
/**
* *cap_string - changes all letters of a string to uppercase
* @str: string
* Return: string
**/
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		str[i] = str[i] - 32;
	}
	return (str);
}
