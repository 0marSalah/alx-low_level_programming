#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* string_nconcat - a function that concatenates two strings
* @n: unsigned int
* @s1: char
* @s2: char
* Return: Returns a pointer to the allocated memory
**/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *res;
int i;

res = malloc(strlen(s1) + strlen(s2) + 1);
if (!res)
return (NULL);

strcpy(res, s1);

if (!s2)
{
res = " ";
}
else
{
if (strlen(s1) == strlen(s2))
{
strcat(res, s2);
}
else
{
for (i = 0; i <  n; i++)
{
res[strlen(s1) + i] = s2[i];
}
}
}
return (res);
}
