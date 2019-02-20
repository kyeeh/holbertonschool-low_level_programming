#include "holberton.h"
#include <stdio.h>
/**
 * puts_half - print half of String.
 * @str: String pointer.
 */
void puts_half(char *str)
{
	int n = 0;
	int i = 0;

	for (; str[n] != '\0'; n++);
	for (; i < n; i++)
		if (i > ((n - 1) / 2))
			_putchar(str[i]);
	_putchar('\n');
}
