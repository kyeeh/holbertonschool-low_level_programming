#include "holberton.h"

/**
 * print_square - Print squares with '#' char.
 * @size: integer to define square size.
 */
void print_square(int size)
{
	int i, j;

	(size <= 0) ? _putchar('\n') : size;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
}
