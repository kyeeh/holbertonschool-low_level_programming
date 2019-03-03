#include "holberton.h"
#include <stdio.h>

/**
 * _strlen -  returns String length.
 * @s: pointer to char.
 * Return: length of String s.
 */
int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
		n++;
	return (n);
}
