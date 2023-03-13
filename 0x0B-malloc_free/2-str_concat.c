#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* str_concat - a function that concatenates two strings.
* allocated space in memory
* @s1: char
* @s2: char
* Return: pointer to the duplicated string
**/
char *str_concat(char *s1, char *s2)
{
if (s1 == NULL)
{
s1 = "";
}

if (s2 == NULL)
{
s2 = "";
}

size_t len1 = strlen(s1);
size_t len2 = strlen(s2);

char *result = malloc(len1 + len2 + 1);

if (result == NULL)
{
return (NULL);
}

strcpy(result, s1);
strcat(result, s2);

return (result);
}
