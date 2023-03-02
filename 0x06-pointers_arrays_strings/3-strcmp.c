#include "main.h"

/**
* *_strncpy - a  function that compares two strings.
* @dest: string
* @src: string
* Return: 0
**/

int _strcmp(char *s1, char *s2)
{
	int s1_length = 0;
	int i = 0;

	while (s1[s1_length] != '\0')
	{
		s1_length++;
	}

	for (i = 0; i < s1_length; i++)
	{
		if (s1[i] == s2[i])
		{
			return (0);
		}
		else if (s1[i] > s2[i])
		{
			return (15);
		}
		else if (s1[i] < s2[i])
		{
			return (-15);
		}
	}
	return (0);
}
