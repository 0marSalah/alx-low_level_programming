#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: amount of the arguments.
 *
 * Return: sum of its parameters.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{	
    printf("%d" , va_arg(valist, int));
    if (separator && i < n - 1)
      printf ("%s", separator);
  }

  printf("\n");
	va_end(valist);
}
