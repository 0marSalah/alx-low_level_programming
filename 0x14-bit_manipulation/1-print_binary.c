#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary
 * DISCUSS
 *The expression putchar((n & 1) + '0') prints
 * the least significant bit of the unsigned long int n as a character.

Here’s how it works:

The bitwise AND operation n & 1 produces a value of either 0 or 1,
depending on whether the least significant bit of n is 0 or 1.
This value is then added to the ASCII value of the character ‘0’,
which is 48. If the least significant bit of n is 0, this produces a value of
48.
If the least significant bit of n is 1, this produces a value of 49.
The putchar function takes this value as an argument and prints
the corresponding character. If the value is 48, it prints the character ‘0’.
if the value is 49, it prints the character ‘1’.
So, this expression prints the least significant bit of n as a character.

The reason for adding '0' to the result of n & 1 is to convert
the numerical value produced by the bitwise AND operation to its corresponding
ASCII character. Since the ASCII value of ‘0’ is 48 and
the ASCII value of ‘1’ is 49, adding '0' to a value of 0 or 1 produces
the ASCII value of the corresponding character.
 * Return: void
 */

void print_binary(unsigned long int n)
{
if (n > 1)
print_binary(n >> 1);
_putchar((n & 1) + '0');
}