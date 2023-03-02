#include "main.h"

/**
 * rot13 - encodes a string in rot13
 * @s: string to be encoded
 *
 * Return: nothing
 */
void print_number(int n)
{
	if (n < 0) {
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0) {
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
