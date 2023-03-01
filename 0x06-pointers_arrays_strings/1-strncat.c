#include "main.h"

/**
* *_strncat - concatenates two strings.
* @dest: string to be appended
* @src: string to be appended from
* @n: number of bytes from src
* Return: a pointer to the resulting string dest
**/

char *_strncat(char *dest, char *src, int n)
{
	int l, i;

	if (n <= 0)
	{
		return (dest);
	}

	l = 0;
	i = 0;

	while (dest[l] != '\0') // length of dest
	{
		l++;
	}
	while (i < n && src[i] != '\0')
	{
		dest[l++] = src[i++];
	}
	return (dest);
}