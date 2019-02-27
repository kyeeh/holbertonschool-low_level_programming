#include "holberton.h"
/**
 * _print_rev_recursion - Prints a string in reverse, followed by a new line.
 * @s: the string to be printed
 *
 */
void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
}
