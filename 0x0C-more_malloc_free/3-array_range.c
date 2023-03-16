#include "main.h"
#include <stdlib.h>

/**
* array_range - a function that creates an array of integers.
* @min: int
* @max: int
* Return: pointer to allocated memory of NULL if it fails
**/

int *array_range(int min, int max)
{
	char *p;
	unsigned int i;

	if (min > max)
		return (NULL);
	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= max - min; i++)
	{
		p[i] = min + i
	}
	return (p);
}
