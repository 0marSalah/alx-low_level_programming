#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - a function that allocates memory using malloc.
* @b: unsigned int
* Return: Returns a pointer to the allocated memory
**/

void *malloc_checked(unsigned int b)
{
unsigned int *var;
var = malloc(b);
if (var == NULL)
exit(98);

return (var);
}
