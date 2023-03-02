#include "main.h"

/**
* *cap_string - a function that capitalizes all words of a string
* @str: string
* Return: string
**/
char *cap_string(char *str)
{
	int i = 0;
	int cap_next = 1;
	while (str[i] != '\0') {
		if (cap_next && str[i] >= 'a' && str[i] <= 'z') {
			str[i] -= ('a' - 'A');
		}
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			cap_next = 1;
		} else {
			cap_next = 0;
		}
		i++;
	}
	return (str);
}
