#include "search_algos.h"

/**
 * binarySearch - a function that searches for
 * a value in an array of integers
 * @array: array of integers
 * @start: int
 * @end: int
 * @key: int
 * Return: int
 */

int binarySearch(int *array, size_t start, size_t end, int key)
{
if (start <= end)
{
int mid = (start + (end - start) / 2);
size_t i;

printf("Searching in array: ");
for (i = start; i <= end; i++)
{
if (i == end)
printf("%d", array[i]);
else
printf("%d, ", array[i]);
}
printf("\n");
if (array[mid] == key)
return (mid);
if (array[mid] > key)
return (binarySearch(array, start, mid - 1, key));
return (binarySearch(array, mid + 1, end, key));
}
return (-1);
}

/**
 * exponential_search - searches for a value in an array of integers
 * using the Exponential search algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */

int exponential_search(int *array, size_t size, int value)
{
size_t i = 1;

if (array == NULL)
return (-1);

if (array[0] == value)
return (0);

while (i < size && array[i] <= value)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
i = i * 2;
}
printf("Value found between indexes [%lu] and [%lu]\n",
i / 2, i > size - 1 ? size - 1 : i);

return (binarySearch(array, i / 2, i > size - 1 ? size - 1 : i, (int)value));
}
