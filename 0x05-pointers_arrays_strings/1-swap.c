#include "main.h"

/**
* swap_int:  function that swaps the values of two integers.
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
