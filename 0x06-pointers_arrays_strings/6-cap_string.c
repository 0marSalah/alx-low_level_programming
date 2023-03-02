#include "main.h"
/**
* *cap_string - changes all lowercase letters of a string to uppercase
* @str: string
* Return: string
**/
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\n' || str[i] != ',' || str[i] != ';' || str[i] != '.' || str[i] != '!' || str[i] != '?' || str[i] != '"' || str[i] != '(' || str[i] != ')' || str[i] != '{' || str[i] != '}' && str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
