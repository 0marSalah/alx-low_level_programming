#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* argstostr - a function that concatenates all the arguments of your program.
* @ac: int
* @av: char
* Return: pointer to a new string
**/
char *argstostr(int ac, char **av)
{
  int i;
  char *str;
  if (ac == 0 || av == NULL)
    return (NULL);

  str = malloc(ac * sizeof(char)) 
  if (str == NULL)
    return (NULL);

  for (i = 0; i < ac; i++)
  {
    str[i] = av[i]
  }

  return (str);d
}
