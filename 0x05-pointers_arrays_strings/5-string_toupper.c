#include "holberton.h"

/**
 * string_toupper - uppercase a string
 * @s: the string to be checked
 *
 * Return: a uppercase string pointer.
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if ((s[i] >= 97) && (s[i] <= 122))
			s[i] -= 32;
	return (s);
}
