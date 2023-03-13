#include <stdio.h>
#include "main.h"

char *_strdup(char *str)
{
  char *str_p;
  int i;

  if (str == NULL)
    return (NULL);

  str_p = malloc(strlen(str))

  if (str_p == NULL)
    return (NULL);

  for (i = 0; i < strlen(str); i++)
  {
    str_p[i] = str[i];
  }
  free(str_p);

  return (str_p);
}