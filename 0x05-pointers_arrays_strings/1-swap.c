#include "main.h"

/**
* swap_int - swaps the values of two integers
* @a: take an int
* @b: take an int
**/

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
