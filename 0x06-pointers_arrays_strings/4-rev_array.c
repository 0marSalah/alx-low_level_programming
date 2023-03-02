#include "main.h"

/**
* reverse_array - a function that reverses the content of an array of integers.
* @*a: integer
* @n: integer
* Return: nothing
**/

void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}

}
