#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: array to iterate.
 * @size: array size.
 * @cmp: comparate function.
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
		for (i = 0; i < (int)size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}
