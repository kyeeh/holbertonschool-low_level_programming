#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - creates a 2 dimensional array of integers.
 * @width: number of columns.
 * @height: number of rows.
 * Return: returns a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int i, j, **matrix = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = malloc(sizeof(height * sizeof(int *)));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(width * sizeof(int));
		if (matrix[i] == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
		{
			matrix[i][j] = 0;
		}
	}
	return (matrix);
}
