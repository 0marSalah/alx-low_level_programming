#include "main.h"

/**
* *_strncat - a function that concatenates two strings
* @dest: string
* @src: string
* @n: number
* Return: string
**/

char *_strncat(char *dest, char *src, int n)
{
	int l;
	int i;

  if (n <= 0)
	{
		return (dest);
	}

	for (l = 0; dest[l] != '\0'; l++)
	{
	}
  if (n > l)
    n = l;
	for (i = 0; src[i] != src[n]; i++)
	{
		dest[l + i] = src[i];
	}
	return (dest);
}
