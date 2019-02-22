#include "holberton.h"
/**
 * leet - encodes a string into 1337
 * @s: the string to be checked
 *
 * Return: a encoded string pointer.
 */
char *leet(char *s)
{
	int i, j;

	char c1encoder[] = {'t', 'a', 'e', 'l', 'o'};
	char c2encoder[] = {'T', 'A', 'E', 'L', 'O'};
	int  i_encoder[] = {7, 4, 3, 1, 0};

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; j < 5; j++)
			if ((s[i] == c1encoder[j]) || (s[i] == c2encoder[j]))
				s[i] = i_encoder[j] + '0';
	return (s);
}
