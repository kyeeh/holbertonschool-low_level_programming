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
	unsigned int i, size = 0;

	if (str == NULL)
		return (NULL);
	else
		while (str[size] != '\0')
			size++;
		char *array = malloc(size * sizeof(char));

		if (array == NULL)
			return (NULL);
		for (i = 0; i < size; i++)
			array[i] = str[i];
	return (array);
}
