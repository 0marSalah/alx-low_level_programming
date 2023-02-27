#include "main.h"

/**
* swap: swap a and b values
* @a: take an int
* @b: take second int
* Return: int
**/

void swap_int(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}