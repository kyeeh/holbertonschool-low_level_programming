#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional array of integers.
 * @grid: dimensional array
 * @height: number of rows.
 */
void free_grid(int **grid, int height)
{
	int i, j, **matrix = NULL;

	if (height <= 0 || height <= 0)
		return (NULL);
	matrix = malloc(sizeof(height * sizeof(int *)));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(height * sizeof(int));
		if (matrix[i] == NULL)
			return (NULL);
		for (j = 0; j < height; j++)
		{
			matrix[i][j] = 0;
		}
	}

}
