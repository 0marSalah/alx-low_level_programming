#include "main.h"
#include <stdlib.h>
/**
* string_nconcat - a function that concatenates two strings
* @n: unsigned int
* @s1: char
* @s2: char
* Return: Returns a pointer to the allocated memory
**/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int l, i;
unsigned int j;
char *p;

l = 0;
i = 0;
j = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[l])
l += 1;
p = malloc(l + n + 1);
if (p == NULL)
return (NULL);
while (s1[i])
{
p[i] = s1[i];
i += 1;
}

while (j < n)
{
p[i + j] = s2[j];
j += 1;
}
p[i + j] = '\0';
return (p);
}
