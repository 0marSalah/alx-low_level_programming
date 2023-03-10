#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - entry point
* @argc: size of argv
* @argv: array
* Return: 0
**/
int main(int argc, char *argv[])
{
	int i, sum = 1;

	if (argc != 0)
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(argv[i]))
				sum += argv[i];
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	else
	{
		printf("%d\n", 0);
	}
	printf("%d\n", sum);
	return (0);
}
