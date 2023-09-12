#include "search_algos.h"

/**
 * print_array -a function that prints an array of integers
 * @array: is a pointer to the first element of the array to print
 * @start: is the starting index of the array
 * @end: is the ending index of the array
 * Return: array
*/

int *print_array(int *array, size_t start, size_t end)
{
size_t i;
for (i = start; i <= end; i++)
{
if (i == end)
printf("%d", array[i]);
else
printf("%d, ", array[i]);
}
printf("\n");
return (array);
}

/**
 *binary_search - a function that searches for a value in an array of integers
 *using the Binary search algorithm
 *@array: is a pointer to the first element of the array to search in
 *@size: is the number of elements in the array
 *@value: is the value to search for
 *Return: index
*/


int binary_search(int *array, size_t size, int value)
{
int lo = 0, hi = size - 1, mid;

while (lo <= hi)
{
mid = (lo + hi) / 2;
printf("Searching in array: ");
print_array(array, lo, hi);
if (array[mid] == value)
return (mid);
else if (array[mid] < value)
lo = mid + 1;
else
hi = mid - 1;
}

return (-1);
}
