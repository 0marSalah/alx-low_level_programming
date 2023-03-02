#include "main.h"

/**
* *rot13 - a function that encodes a string into rot13
* @str: string
* Return: string
**/

char *rot13(char *str)
{
	int i, j;

	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	char rot13[] = "nopqrstuvwxyzabcdefghijklm";

	i = 0;
	j = 0;

	while(str[i] != '\0')
	{
		while (alpha[i] == str[i] || alpha[i] - 32 == str[i])
		{
			str[i] = rot13[i];
		}
		i++;
	}
	return (str);
}
