#include "main.h"
#include <stdlib.h>

/**
* argstostr - a function that concatenates all the arguments of your program.
* @ac: int
* @av: char
* Return: pointer to a new string
**/

char *argstostr(int ac, char **av) {
  int len = 0;
  char *result;
  int j;
  int i;
  int k = 0;
  if (ac == 0 || av == NULL)
  {
    return (NULL);
  }
  for (i = 0; i < ac; i++)
  {
    j = 0;
    while (av[i][j] != '\0')
    {
      len++;
      j++;
    }
    len++;
  }
  result = malloc((len + 1) * sizeof(char));
  if (result == NULL)
  {
    return (NULL);
  }
  for (i = 0; i < ac; i++)
  {
    while (av[i][j] != '\0')
    {
      result[k] = av[i][j];
      k++;
      j++;
    }
    result[k] = '\n';
    k++;
  }
  result[k] = '\0';
  return (result);
}

