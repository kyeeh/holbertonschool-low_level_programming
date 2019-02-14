#include "holberton.h"

/**
 * print_line - Print lines with '_' char.
 * @n: integer to define n chars to print.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
