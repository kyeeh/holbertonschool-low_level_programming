#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - Creates an array and initializes it with a specific char
 * @c: char used to initialize
 * @size: the size of the array
 *
 * Return: Array of chars.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = malloc(size * sizeof(char));

	if (size == 0 || array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
