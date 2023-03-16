#include "main.h"
#include <stdlib.h>
/**
* _calloc - a function that allocates memory for an array, using malloc
* @nmemb: unsigned int
* @size: unsigned int
* Return: pointer to allocated memory of NULL if it fails
**/

char *_calloc(unsigned int nmemb, unsigned int size)
{
  char *res;
  int i;

  if (nmemb == 0 || size == 0)
    return (NULL);

  res = malloc(size * nmemb);

  if (!res)
    return (NULL);

  for (i = 0; i < nmemb * size; i++)
    *(res + i) = 0;

  return (res);
}
