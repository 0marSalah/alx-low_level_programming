#include "main.h"
#include <stdlib.h> // for malloc and free

/**
* argstostr - a function that concatenates all the arguments of your program.
* @ac: int
* @av: char
* Return: pointer to a new string
**/

char *argstostr(int ac, char **av) {
if (ac == 0 || av == NULL)
{
return (NULL);
}
int len = 0;
char *result;
for (int i = 0; i < ac; i++)
{
int j = 0;
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
int k = 0;
for (int i = 0; i < ac; i++)
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

