#include "main.h"
#include <stdlib.h>
/**
* string_nconcat - a function that concatenates two strings
* @n: unsigned int
* @s1: char
* @s2: char
* Return: Returns a pointer to the allocated memory
**/

char *_calloc(unsigned int nmemb, unsigned int size)
{
  void *res;
  char *p;
  int i;

  if (nmemb == 0 || size == 0)
    return (NULL);

  res = malloc(size * nmemb);

  if (!res)
    return (NULL);

  p = res;

  for (i = 0; i < nmemb * size; i++) {
    p[i] = 0;
  }

  return (res);
}
