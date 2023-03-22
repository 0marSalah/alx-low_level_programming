#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array.
 * @array: input integer array.
 * @size: size of the array.
 * @action: pointer to the function.
 *
 * Return: no return.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
  int i = 0;
  if (array && action)
  {
    while (i < size)
    {
      action(array[i]);
      i++;
    }
  }
}
