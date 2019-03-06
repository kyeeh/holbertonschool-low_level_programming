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
	char *array = NULL;
	unsigned int i = 0, j = 0, k;

	if (ac == 0 || av == NULL)
		return (NULL);
	array = malloc((i + j + 1) * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		array[k] = *av[k];
	i = k;
	for (k = 0; k < j; k++)
	{
		array[i] = *av[k];
		i++;
	}
	array[i] = '\0';
	return (array);
}
