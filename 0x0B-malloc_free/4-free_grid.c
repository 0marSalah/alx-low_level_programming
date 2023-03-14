#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* **alloc_grid - a function that frees a 2 dimensional grid previously created by
* your alloc_grid function.
* @grid: a function that returns a pointer to
* a 2 dimensional array of integers.
* @height: int
* Return: nothing
**/
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++) {
free(grid[i]);
}

free(grid);
}
