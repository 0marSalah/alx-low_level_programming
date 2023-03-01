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
    if (src[i] != '\0')
		  dest[l + i] = src[i];
	}
	return (dest);
}
