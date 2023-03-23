#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		if (va_arg(valist, char))
			printf("%s", va_arg(valist, char));
		else
			printf("nil");

		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
