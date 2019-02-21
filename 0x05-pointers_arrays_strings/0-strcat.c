#include "holberton.h"
#include <stdio.h>
/**
 * _strcat -  concatenates the values of two strings.
 * @src: source string pointer.
 * @dest: destination string pointer.
 * Return: String concatenated.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int n = 0;

	while (dest[n] != '\0')
		n++;
	dest[n - 1] = ' ';
	for (; src[i] != '\0'; i++)
		dest[n + i] = src[i];
	dest[n + i] = '\0';
	return (dest);
}
