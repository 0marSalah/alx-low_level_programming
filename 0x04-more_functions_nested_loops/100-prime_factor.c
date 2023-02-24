#include <stdio.h>
/**
 * main -  checks for checks for a digit (0 through 9).
 *
 * Return: Always 0.
 */

int main(void)
{
	long num = 612852475143;
	long i = 2;
	long max_factor = 1;

	while (num > 1)
	{
		if (num % i == 0)
		{
			max_factor = i;
			num /= i;
			while (num % i == 0)
			{
					num /= i;
			}
		}
		i++;
	}

	printf("%ld\n", max_factor);

	return 0;
}
