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

### 2. 10 mandatory

# Write a function that returns the value of a bit at a given index.

    Prototype: int get_bit(unsigned long int n, unsigned int index);
    where index is the index, starting from 0 of the bit you want to get
    Returns: the value of the bit at index index or -1 if an error occured

julien@ubuntu:~/0x14. Binary$ cat 2-main.c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = get_bit(1024, 10);
    printf("%d\n", n);
    n = get_bit(98, 1);
    printf("%d\n", n);
    n = get_bit(1024, 0);
    printf("%d\n", n);
    return (0);
}
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-get_bit.c -o c  
julien@ubuntu:~/0x14. Binary$ ./c
1
1
0

### 3. 11 mandatory

# Write a function that sets the value of a bit to 1 at a given index.

    Prototype: int set_bit(unsigned long int *n, unsigned int index);
    where index is the index, starting from 0 of the bit you want to set
    Returns: 1 if it worked, or -1 if an error occurred

julien@ubuntu:~/0x14. Binary$ cat 3-main.c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int n;

    n = 1024;
    set_bit(&n, 5);
    printf("%lu\n", n);
    n = 0;
    set_bit(&n, 10);
    printf("%lu\n", n);
    n = 98;
    set_bit(&n, 0);
    printf("%lu\n", n);
    return (0);
}
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-set_bit.c -o d
julien@ubuntu:~/0x14. Binary$ ./d
1056
1024
99


### 4. 100 mandatory

# Write a function that sets the value of a bit to 0 at a given index.

    Prototype: int clear_bit(unsigned long int *n, unsigned int index);
    where index is the index, starting from 0 of the bit you want to set
    Returns: 1 if it worked, or -1 if an error occurred

julien@ubuntu:~/0x14. Binary$ cat 4-main.c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int n;

    n = 1024;
    clear_bit(&n, 10);
    printf("%lu\n", n);
    n = 0;
    clear_bit(&n, 10);
    printf("%lu\n", n);
    n = 98;
    clear_bit(&n, 1);
    printf("%lu\n", n);
    return (0);
}
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-clear_bit.c -o e
julien@ubuntu:~/0x14. Binary$ ./e
0
0
96

### 5. 101 mandatory

# Write a function that returns the number of bits you would need to flip to get from one number to another.

    Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);
    You are not allowed to use the % or / operators

julien@ubuntu:~/0x14. Binary$ cat 5-main.c
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

    n = flip_bits(1024, 1);
    printf("%u\n", n);
    n = flip_bits(402, 98);
    printf("%u\n", n);
    n = flip_bits(1024, 3);
    printf("%u\n", n);
    n = flip_bits(1024, 1025);
    printf("%u\n", n);
    return (0);
}
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-flip_bits.c -o f
julien@ubuntu:~/0x14. Binary$ ./f
2
5
3
1

Discuss
= /*
n -> 3, m -> 4
x = 0011 ^ 0100 = 0111 = 7
count = 0
while (7 > 0)
{
if ((7 & 1) == 1) # 0111 & 0001 = 0001 = 1
count++; # count = 1
x = 0111 >> 1 = 0011 = 3
}
-------
while (3 > 0)
{
if ((3 & 1) == 1) # 0011 & 0001 = 0001 = 1
count++; # count = 2
x = 0011 >> 1 = 0001 = 1
}
-------
while (1 > 0)
{
  if ((1 & 1) == 1) # 0001 & 0001 = 0001 = 1
  count++; # count = 3
  x = 0001 >> 1 = 0000 = 0
  }
  return (3)
*/


### 6. Endianness advanced

# Write a function that checks the endianness.

    Prototype: int get_endianness(void);
    Returns: 0 if big endian, 1 if little endian

julien@ubuntu:~/0x14. Binary$ cat 100-main.c
#include <stdio.h>
#include "main.h"

int main(void)
{
    int n;

    n = get_endianness();
    if (n != 0)
    {
        printf("Little Endian\n");
    }
    else
    {
        printf("Big Endian\n");
    }
    return (0);
}
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-get_endianness.c -o h
julien@ubuntu:~/0x14. Binary$ ./h 
Little Endian
julien@ubuntu:~/0x14. Binary$ lscpu | head
Architecture:          x86_64
CPU op-mode(s):        32-bit, 64-bit
Byte Order:            Little Endian
CPU(s):                1
On-line CPU(s) list:   0
Thread(s) per core:    1
Core(s) per socket:    1
Socket(s):             1
NUMA node(s):          1
Vendor ID:             GenuineIntel
