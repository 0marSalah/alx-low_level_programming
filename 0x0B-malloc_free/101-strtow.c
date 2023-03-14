#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* strtow - a function that splits a string into words.
* @str: char
* Return: pointer to a array of char
**/

int count_words(char *str);

char **strtow(char *str)
{
char **words;
int num_words, i, j, k, len;
if (str == NULL || *str == '\0')
{
return (NULL);
}
if (str[0] == " ")
{
return (NULL);
}

num_words = count_words(str);

words = (char **)malloc((num_words + 1) * sizeof(char *));
if (words == NULL)
{
return (NULL);
}

for (i = 0; i < num_words; i++)
{
words[i] = NULL;
}

i = 0;
while (*str != '\0')
{
while (*str == ' ')
{
str++;
}

j = 0;
while (str[j] != ' ' && str[j] != '\0')
{
j++;
}

if (j > 0)
{
len = j;
words[i] = (char *)malloc((len + 1) * sizeof(char));
if (words[i] == NULL)
{
for (k = 0; k < i; k++)
{
free(words[k]);
}
free(words);
return (NULL);
}
strncpy(words[i], str, len);
words[i][len] = '\0';
i++;
}

str += j;
}

words[num_words] = NULL;

return (words);
}

int count_words(char *str)
{
int count = 0;
int i = 0;
while (str[i] != '\0')
{
while (str[i] == ' ')
{
i++;
}
if (str[i] != '\0')
{
count++;
}
while (str[i] != '\0' && str[i] != ' ')
{
i++;
}
}
return (count);
}
