#include "holberton.h"
/**
 * rot13 - encodes a string into rot13
 * @s: the string to be checked
 *
 * Return: a encoded string pointer.
 */
char *rot13(char *s)
{
	int i, j;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ulphabet[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; j < 52; j ++)
			if (s[i] == alphabet[j])
				s[i] = ulphabet[j];
	return (s);
}
