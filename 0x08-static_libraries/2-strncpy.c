#include "holberton.h"
#include <stdio.h>
/**
 * _strncpy - copy two strings with n as Max bytes from source.
 * @src: source string pointer.
 * @dest: destination string pointer.
 * @n : amount of caracters to be concatenated.
 * Return: a String copy.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for ( ; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n ; i++)
		dest[i] = '\0';
	return (dest);
}
