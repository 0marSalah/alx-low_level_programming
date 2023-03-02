#include "main.h"

/**
* _strcmp - a function that copies a string
* @s1: string
* @s2: string
* Return: string
**/

int _strcmp(char *s1, char *s2)
{

int i = 0;

while (s1[i] == s2[i]) {
if (s1[i] == '\0') {
return 0;
}
i++;
}

return (s1[i] - s2[i]);
}
