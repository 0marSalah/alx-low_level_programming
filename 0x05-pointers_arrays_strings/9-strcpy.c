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

	for (i = 0; i < strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
