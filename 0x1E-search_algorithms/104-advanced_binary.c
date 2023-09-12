#include "search_algos.h"

int advanced_binary_recursive(int *array, int value, int lo, int hi)
{
int mid, i;
if (lo > hi)
return (-1);

mid = lo + (hi - lo) / 2;

printf("Searching in array: ");
for (i = lo; i <= hi; i++)
{
if (i == hi)
printf("%d", array[i]);
else
printf("%d, ", array[i]);
}
printf("\n");

if (array[mid] == value)
{
int left_result = advanced_binary_recursive(array, value, lo, mid - 1);
return ((left_result != -1) ? left_result : mid);
}
else if (array[mid] < value)
{
return (advanced_binary_recursive(array, value, mid + 1, hi));
}
else
{
return (advanced_binary_recursive(array, value, lo, mid - 1));
}
}
/**
 * advanced_binary - a function that searches for a value in an array of
 * integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in the array
 * @value: is the value to search for
 * Return: index
 */

int advanced_binary(int *array, size_t size, int value)
{
if (array == NULL || size == 0)
return (-1);

return (advanced_binary_recursive(array, value, 0, size - 1));
}
