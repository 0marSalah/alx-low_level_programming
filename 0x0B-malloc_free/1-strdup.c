#include "main.h"
#include <stdlib.h>
#include <string.h>

char *_strdup(char *str)
{
  char *str_p;

  if (str == NULL)
    return (NULL);

  str_p = malloc(strlen(str) + 1)

  if (str_p == NULL)
    return (NULL);

  strcpy(dup, str);

  return (str_p);
}
