#include <stdio.h>

int main ()
{
    int i;
    for (i = 0; i < 10; i++) {
        char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
    }

    return (0);
}