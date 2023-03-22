#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: input name.
 * @f: function pointer.
 *
 * Return: no return.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	if (size <= 0)
		return (-1);
	if (array && cmp)
	{		
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return(i);
		}
		
	}
	return (-1);
}
