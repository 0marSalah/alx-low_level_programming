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
    char *result;
    int s1_len, s2_len, result_len;

    if (!s1) 
      s1 = "";
    if (!s2) 
      s2 = "";

    s1_len = strlen(s1);
    s2_len = strlen(s2);

    if (n >= s2_len)
      n = s2_len;

    result_len = s1_len + n + 1;
    result = malloc(result_len);

    if (!result) 
      return NULL;

    strcpy(result, s1);
    strncat(result, s2, n);
    result[result_len - 1] = '\0';

    return (result);
}

