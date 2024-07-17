#include "main.h"
#include <stdlib.h>

/**
  * free_grid - free memory of 2d array
  * @grid: pointer to the array
  * @height: height of the array
  * Return: void
  */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
