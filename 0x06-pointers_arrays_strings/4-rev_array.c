#include "main.h"
/**
* reverse_array - a function that reverses the content of an array of integers
* @a: integer
* @n: integer
* Return: nothing
**/

void reverse_array(int *a, int n)
{
	int tmp;
	int i;
	int j = n - 1;

	for (i = 0; i < j; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}

}
