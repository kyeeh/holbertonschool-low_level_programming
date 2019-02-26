#include "holberton.h"
/**
 * _strchr - locates a char in a string
 * @s: the string to check
 * @c: char to find
 *
 * Return: pointer to the first char ocurrency.
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;
	
	if (s[0] == '\0')
		return (&s[0]);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (&s[i]);
}
