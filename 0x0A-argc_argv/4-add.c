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
	int sum = 0;
    int i, j;
    char *ptr;
    
    // Loop through each argument passed to the program
    for (i = 1; i < argc; i++) {
        // Loop through each character in the argument
        for (j = 0; argv[i][j] != '\0'; j++) {
            // Check if the character is a digit or not
            if (!isdigit(argv[i][j])) {
                // If not, print an error message and return 1
                printf("Error\n");
                return 1;
            }
        }
        
        // Convert the argument to an integer and add it to the sum
        sum += strtol(argv[i], &ptr, 10);
    }
    
    // Print the sum or 0 if no arguments were passed
    printf("%d\n", sum);
    return 0;
}
