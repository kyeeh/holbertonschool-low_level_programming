#include "holberton.h"
#include <stdio.h>
/**
 * isSeparator - checks if a char is separator
 * @c: the char to be checked
 *
 * Return: 0 or 1.
 */
int isSeparator(char c)
{
	/* 12 SEPARATORS */
	char separators[] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
				'\'', '(', ')', '{', '}' };
	int i;

	for (i = 0; i < 13; i++)
	{
		if (separators[i] == c)
			return (1);
	}
	return (0);
}

/**
 * cap_string - capitalize words in a string
 * @s: the string to be checked
 *
 * Return: a uppercase string pointer.
 */
char *cap_string(char *s)
{
	int i;

	((s[0] >= 97) && (s[0] <= 122)) ? s[0] -= 32 : 0;
	for (i = 1; s[i] != '\0'; i++)
		(isSeparator(s[i - 1]) && ((s[i] >= 97) && (s[i] <= 122))) ? s[i] -= 32 : 0;
	return (s);
}
