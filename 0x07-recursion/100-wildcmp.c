#include "holberton.h"
/* #include <stdio.h> */
/**
 * _strlen_recursion - Prints the length of a string.
 * @s: the string to be printed
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 * str_checker - check if two strings are identical.
 * @s1: string_1 base address.
 * @s2: string_2 base address.
 * @i: left index.
 * @j: special index. (joker)
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int str_checker(char *s1, char *s2, int i, int j)
{
	/* printf("S1: %c, S2: %c, i=%i, j=%i\n", s1[i], s2[j], i, j); */
	if (s1[i] == s2[j])
		if (s1[i + 1] == '\0' && s2[j + 1] == '\0')
			return (1);
		else
			return (str_checker(s1, s2, i + 1, j + 1));
	else
		if (s2[j] == '.')
			return (0);
		if (s2[j] == '*' && s2[j + 1] == '\0')
			return (1);
		if (s2[j] == '*' && s2[j + 1] == '.')
		{
			if (s1[i] == '\0')
				return (0);
			if (s1[i] == '.')
				return (str_checker(s1, s2, i + 1, j + 2));
			else
				return (str_checker(s1, s2, i + 1, j));
		}
		if (s2[j] == '*' && s2[j + 1] != '*')
		{
			if (s1[i] == '\0')
				return (0);
			if (s1[i] == '.')
				return (str_checker(s1, s2, i + 1, j + 2));
			else
				return (str_checker(s1, s2, i, j + 1));
		}
		return (0);
}
/**
 * wildcmp - check if strings could be considered identical
 * @s1: base address for string.
 * @s2: base address for string.
 *
 * Return: 1 if are considered identical.
 */
int wildcmp(char *s1, char *s2)
{
	return (str_checker(s1, s2, 0, 0));
}
