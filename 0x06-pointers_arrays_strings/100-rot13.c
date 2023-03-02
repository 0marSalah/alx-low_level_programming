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

	while (str[i] != '\0')
	{
		while (j < 26 && alpha[j] != str[i] && alpha[j] - 32 != str[i])
		{
				j++;
		}
		
		if (j < 26)
		{
				str[i] = rot13[j];
		}
		
		i++;
		j = 0;
	}
	return (str);
}
