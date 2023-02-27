#include "main.h"
#include <stdio.h>

/**
 *_strcpy  - function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.,
 * followed by a new line.
 * @dest: pointer to an array of integers
 * @src: the buffer pointed to by dest.
 * Return: void
**/
char *_strcpy(char *dest, char *src)
{
	int i;
	int j;
	while (src[i] != '\0')
{
i++;
}
i--;
for (j = 0; j < i; j++)
{
dest[j] = src[j];
}
return (dest);
}
