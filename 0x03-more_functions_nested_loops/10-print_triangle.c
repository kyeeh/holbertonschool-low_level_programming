#include "holberton.h"

/**
 * print_triangle - Print shell triangle with '#' char.
 * @size: integer to define # chars to print.
 */
void print_triangle(int size)
{
	int i, j, margin;
	(size <= 0) ? _putchar('\n') : size;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			margin = size - i - 1;
			(j >= margin) ? _putchar('#') : _putchar(' ');
		}
		_putchar('\n');
	}
}
