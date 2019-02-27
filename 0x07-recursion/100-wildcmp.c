#include "holberton.h"
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
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int str_checker(char *s1, char *s2, int i)
{
	if (s1[i] == s2[i])
		if (s1[i] == '\0')
			return (1);
		else
			return (str_checker(s1, s2, i + 1));
	else
		return (0);
}
/**
 * is_palindrome - check if s is palindrome
 * @s: base address for string.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	return (str_checker(s1, s2, 0));
}
