#include "holberton.h"
/**
 * print_rev - print strings in reverse.
 * @s: String pointer.
 */
void print_rev(char *s)
{
	int n = 0;

	while (s[n] != '\0')
		n++;
	for (--n; n >= 0; n--)
		_putchar(s[n]);
	_putchar('\n');
}
