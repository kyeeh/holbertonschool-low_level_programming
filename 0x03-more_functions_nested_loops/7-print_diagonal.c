#include "holberton.h"

/**
 * print_diagonal - Print digonal lines with '\' char.
 * @n: integer to define n chars to print.
 */
void print_diagonal(int n)
{
	int i, j;
	(n <= 0) ? _putchar('\n') : n;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
