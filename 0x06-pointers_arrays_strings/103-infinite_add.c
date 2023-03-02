#include "main.h"

/**
* _strlen - function that returns the length of a string.
* @s : s is a character
* Return: value is i
**/

int _strlen(char *s)
{
int len = 0;
while (*s++)
len++;
return (len);
}

/**
 * infinite_add - Adds two numbers
 * @n1: The first number
 * @n2: The second number
 * @r: The buffer for storing the result
 * @size_r: The size of the buffer
 *
 * Return: If result can be stored in r, then r, otherwise 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
  int carry = 0;
  int i = _strlen(n1) - 1;
  int j = _strlen(n2) - 1;
  int k = size_r - 1;
  
  r[k] = '\0';

  while (i >= 0 || j >= 0) 
  {
  int sum = carry;
  if (i >= 0)
    {
      sum += n1[i] - '0';
      i--;
    }
    if (j >= 0)
    {
      sum += n2[j] - '0';
      j--;
    }
    if (k <= 0)
    {
      return 0;
    }
    carry = sum / 10;
    r[k - 1] = sum % 10 + '0';
    k--;
  }

  if (carry != 0)
  {
    if (k <= 0)
    {
      return 0;
    }
    r[k - 1] = carry + '0';
  }
  else if (k == size_r - 1)
  {
    return 0;
  }

  return &r[k];
}
