# 0x14. C - Bit manipulation
### 0. 0 mandatory

## Write a function that converts a binary number to an unsigned int.

    Prototype: unsigned int binary_to_uint(const char *b);
    where b is pointing to a string of 0 and 1 chars
    Return: the converted number, or 0 if
        there is one or more chars in the string b that is not 0 or 1
        b is NULL

julien@ubuntu:~/0x14. Binary$ cat 0-main.c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;


    n = binary_to_uint("1");
    printf("%u\n", n);
    n = binary_to_uint("101");
    printf("%u\n", n);
    n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);
    return (0);
}
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-binary_to_uint.c -o a
julien@ubuntu:~/0x14. Binary$ ./a 
1
5
0
98
402

### 1. 1 mandatory

## Write a function that prints the binary representation of a number.

    Prototype: void print_binary(unsigned long int n);
    Format: see example
    You are not allowed to use arrays
    You are not allowed to use malloc
    You are not allowed to use the % or / operators

julien@ubuntu:~/0x14. Binary$ cat 1-main.c 
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_binary(0);
    printf("\n");
    print_binary(1);
    printf("\n");
    print_binary(98);
    printf("\n");
    print_binary(1024);
    printf("\n");
    print_binary((1 << 10) + 1);
    printf("\n");
    return (0);
}
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_binary.c _putchar.c -o b
julien@ubuntu:~/0x14. Binary$ ./b 
0
1
1100010
10000000000
10000000001

-- sol --
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
