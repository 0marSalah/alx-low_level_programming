#include "main.h"

/**
* reverse_array - a function that reverses the content of an array of integers.
* @*a: array of integers
* @n: number of elements in the array
**/

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;
	while (a[i] != '\0')
	{
		i++;
	}
	i--;
	for (j = 0; j < i; j++)
	{
		a[i] = a[j];
	}
}
