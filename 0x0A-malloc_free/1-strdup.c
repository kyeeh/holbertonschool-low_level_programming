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
	unsigned int i = 0, size = 0;

	while (str[size] != '\0')
		size++;
	char *array = malloc(size * sizeof(char));

	if (str == NULL || array == NULL)
		return (NULL);
	for (; i < size; i++)
		array[i] = str[i];
	return (array);
}
