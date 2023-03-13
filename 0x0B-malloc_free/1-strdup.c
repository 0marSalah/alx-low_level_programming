#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* _strdup - a function that returns a pointer to a newly
* allocated space in memory
* @str: char
* Return: pointer to the duplicated string
**/
char *_strdup(char *str)
{
char *str_p;

if (str == NULL)
return (NULL);

str_p = malloc(strlen(str) + 1);

if (str_p == NULL)
return (NULL);

strcpy(str_p, str);

return (str_p);
}
