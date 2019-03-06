#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional array of integers.
 * @grid: dimensional array
 * @height: number of rows.
 */
void free_grid(int **grid, int height)
{
	int i, j;

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < height; j++)
		{
			grid[i][j] = 0;
		}
	}
}
