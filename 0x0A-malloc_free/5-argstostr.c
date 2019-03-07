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
	int i, j, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	array = malloc(sizeof(char) * ac);
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
	}
	/*array[i] = '\0';*/
	return (array);
}
