#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in a sorted array of integers
 * using jump search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: Index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
size_t jump = sqrt(size);
size_t left = 0;
size_t right = jump;
size_t i;
if (array == NULL)
return (-1);
printf("Value checked array[%ld] = [%d]\n", left, array[left]);
while (array[right] < value && right < size)
{
printf("Value checked array[%ld] = [%d]\n", right, array[right]);
left = right;
right += jump;
}
printf("Value found between indexes [%ld] and [%ld]\n", left, right);
for (i = left; i < size && i <= right; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}
return (-1);
}
