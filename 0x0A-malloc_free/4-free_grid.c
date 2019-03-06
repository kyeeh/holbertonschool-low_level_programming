#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2 dimensional array of integers.
 * @width: number of columns.
 * @height: number of rows.
 * Return: returns a pointer to a 2 dimensional array of integers.
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
