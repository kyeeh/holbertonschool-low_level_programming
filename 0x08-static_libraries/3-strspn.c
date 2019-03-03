#include "holberton.h"
/**
 * _strspn - locates a char in a string
 * @s: the string to check
 * @accept: prefix to find
 *
 * Return: integer with match amount.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n;

	n = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				n++;
		if (i == n)
			break;
	}
	return (i);
}
