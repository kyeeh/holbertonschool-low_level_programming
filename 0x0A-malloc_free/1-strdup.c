#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 * @str: string to be duplicated.
 *
 * Return: String duplicated
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *array = malloc(size * sizeof(char));

	if (str == NULL || array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = str[i];
	return (array);
}
