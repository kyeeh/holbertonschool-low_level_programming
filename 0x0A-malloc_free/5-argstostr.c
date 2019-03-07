#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenates arguments.
 * @ac: number of string to be concatenated.
 * @av: strings to be concatenated.
 * Return: String concatenated.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	char *array = NULL, *concat = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);
	array = malloc(sizeof(char) * ac * 100);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			array[k] = av[i][j];
			k++;
		}
		array[k] = '\n';
		k++;
		printf("K: %i, AC: %i\n", k, ac);
	}
	concat = malloc(sizeof(char) * (++k));
	concat = array;
	concat[k] = '\0';
	array = NULL;
	free(array);
	return (concat);
}
