#include "holberton.h"

/**
 * print_alphabet ten times - void to print alphabet 10x
 *
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
