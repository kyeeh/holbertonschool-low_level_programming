#include "holberton.h"
#include <stdio.h>
/**
 * puts2 - print one of two from a String.
 * @str: String pointer.
 */
void puts2(char *str)
{
	int n = 0;

	for (; str[n] != '\0'; n++)
		if (n % 2 == 0)
			_putchar(str[n]);
	_putchar('\n');
}
