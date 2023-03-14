#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
* strtow - a function that splits a string into words.
* @str: char
* Return: pointer to a array of char
**/

char **strtow(char *str)
{
char **words;
int i, j, k, n, len;

if (str == NULL || *str == '\0') {
return NULL;
}

words = (char **)malloc((MAX_WORDS + 1) * sizeof(char *));
if (words == NULL) {
return NULL;
}

i = 0;
while (i < MAX_WORDS && *str != '\0') {
while (isspace(*str)) {
str++;
}
if (*str == '\0') {
break;
}
len = 0;
while (*(str + len) != '\0' && !isspace(*(str + len))) {
len++;
}
words[i] = (char *)malloc((len + 1) * sizeof(char));
if (words[i] == NULL) {
for (j = 0; j < i; j++) {
free(words[j]);
}
free(words);
return NULL;
}
for (k = 0; k < len; k++) {
words[i][k] = *(str++);
}
words[i][k] = '\0';
i++;
}

words[i] = NULL;
return words;
}
