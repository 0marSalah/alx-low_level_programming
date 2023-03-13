#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{
  char *str_p;
  int i;

  if (str == NULL)
    return (NULL);

  str_p = malloc(strlen(str) + 1)

  if (str_p == NULL)
    return (NULL);

  for (i = 0; i < strlen(str); i++)
  {
    str_p[i] = str[i];
  }

  return (str_p);
}
