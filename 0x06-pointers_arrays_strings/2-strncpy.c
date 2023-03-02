#include "main.h"

/**
* *_strncat - function that copies a string.
* @dest: string to be appended
* @src: string to be appended from
* @n: number of bytes from src
* Return: a pointer to the resulting string dest
**/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	while (src[i] != '\0')
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
