#include "holberton.h"
#include <stdio.h>
/**
 * cap_string - capitalize words in a string
 * @s: the string to be checked
 *
 * Return: a uppercase string pointer.
 */

const char S[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '\'', '(', ')', '{', '}' }; /* 12 SEPARATORS */

int isSeparator(char c)
{
	int i;

	for (i = 0; i < 12; i++)
	{
		if (S[i] == c)
			return (1);
	}
	return (0);
}

char *cap_string(char *s)
{
	int i;

	for (i = 1; s[i] != '\0'; i++)
		(isSeparator(s[i - 1]) && ((s[i] >= 97) && (s[i] <= 122))) ? s[i] -= 32 : 0 ;
	return (s);
}
