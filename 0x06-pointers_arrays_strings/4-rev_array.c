#include "main.h"

/**
* reverse_array - a function that reverses the content of an array of integers.
* @*a: array of integers
* @n: number of elements in the array
**/

void reverse_array(int *a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		a[i] = a[n - i];
	}
}
