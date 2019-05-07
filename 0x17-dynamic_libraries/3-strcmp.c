#include "holberton.h"
#include <stdio.h>
/**
 * _strcmp - compares two strings.
 * @s1: string pointer.
 * @s2: string pointer.
 * Return: comparator number.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
		if (s1[i] - s2[i])
			break;
	return (s1[i] - s2[i]);
}
