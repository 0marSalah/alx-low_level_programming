#include <stdio.h>
#include <stdlib.h>

/**
* main - entry point
* @argc: size of argv
* @argv: array
* Return: 0
**/
int main(int argc, char *argv[])
{
	int i;
	if(argc > 0)
		printf("%s\n", argv[0]);
		for (i = 1; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	return (0);
}
