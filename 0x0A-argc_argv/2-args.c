#include <stdio.h>
#include <stdlib.h>

/**
* main - entry point
* @argc: size of argv
* @argv: array
* Return: 0
**/
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;
	if (argc > 0)
	{
		for (i = 1; i < argc; i++)
		{
			printf("%s", argv[i]);
			printf("\n");
		}
	}
	return (0);
}
