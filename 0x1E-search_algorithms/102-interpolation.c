#include "search_algos.h"

/**
 * interpolation_search - a function that searches for a
 * value in an array of integers using the Interpolation search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in the array
 * @value: is the value to search for
 * Return: index
*/

int interpolation_search(int *array, size_t size, int value)
{
size_t lo = 0, hi = size - 1, mid = -1;

while (lo <= hi)
{
mid = (int)(lo + (hi - lo) * (value - array[lo]) / (array[hi] - array[lo]));
printf("Value checked array[%lu] = [%d]\n", mid, array[mid]);

if (array[mid] == value)
return (mid);
else if (array[mid] < value)
lo = mid + 1;
else
hi = mid - 1;
}

return (-1);
}
