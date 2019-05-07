#include "holberton.h"

/**
 * _puts - print chars or strings.
 * @str: String pointer.
 */
void _puts(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
