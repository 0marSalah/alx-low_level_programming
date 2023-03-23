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
	va_list args;
	va_start(args, n);

	for (int i = 0; i < n; i++)
	{
		const char *str = va_arg(args, const char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
