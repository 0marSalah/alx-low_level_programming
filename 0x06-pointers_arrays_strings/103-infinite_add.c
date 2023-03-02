#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: The first number
 * @n2: The second number
 * @r: The buffer for storing the result
 * @size_r: The size of the buffer
 *
 * Return: If result can be stored in r, then r, otherwise 0
 */
char *infinite_add(char *n1, char *n2, char *r, int r_index)
{
  int num, tens = 0;

  for (; *n1 && *n2; n1--, n2--, r_index--)
  {
    num = (*n1 - '0') + (*n2 - '0');
    num += tens;
    *(r + r_index) = (num % 10) + '0';
    tens = num / 10;
  }
  for (; *n1; n1--, r_index--)
  {
    num = (*n1 - '0') + tens;
    *(r + r_index) = (num % 10) + '0';
    tens = num / 10;
  }
  for (; *n2; n2--, r_index--)
  {
    num = (*n2 - '0') + tens;
    *(r + r_index) = (num % 10) + '0';
    tens = num / 10;
  }
  if (tens && r_index >= 0)
  {
    *(r + r_index) = (tens % 10) + '0';
    return (r + r_index);
  }
  else if (tens && r_index < 0)
    return (0);
  return (r + r_index + 1);
}
