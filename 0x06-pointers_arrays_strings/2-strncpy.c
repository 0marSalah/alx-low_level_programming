#include "main.h"

/**
* *_strncpy - a function that copies a string
* @dest: string
* @src: string
* @n: integer
* Return: string
**/

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
