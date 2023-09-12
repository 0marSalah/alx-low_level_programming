#include "search_algos.h"

/**
 * jump_search - a function that searches for a value in an array of integers
 * using the Jump search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in the array
 * @value: is the value to search for
 * Return: int
*/

int jump_search(int *array, size_t size, int value)
{
size_t step, prev, i;

if (array == NULL)
return (-1);

step = sqrt(size);
prev = 0;


while (prev < size && array[prev] < value)
{
printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
prev += step;
}

printf("Value found between indexes [%lu] and [%lu]\n", prev - step, prev);

for (i = prev - step; i <= prev && i < size; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}

return (-1);
}
