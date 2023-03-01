#include "main.h"

/**
* _strlen - function that returns the length of a string.
* @s : s is a character
* Return: value is i
**/

int _strlen(char *s)
{
int len = 0;
while (*s++)
len++;
return (len);
}

/**
 * _strcat - function appends the src string to the dest string
 * @dest -  string to it
 * @str - string to append
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
  int i;
  int j;

  for (i = 1; i < _strlen(src - 1); i++)
  {
    for (j = 0; j < _strlen(dest - 1); j++)
    {
      dest[_strlen(dest + 1)] = src[j];
    }
  }
  return (dest);
}