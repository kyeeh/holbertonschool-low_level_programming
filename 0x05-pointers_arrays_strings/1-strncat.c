#include "holberton.h"
#include <stdio.h>
/**
 * _strncat -  concatenates two strings with n as Max bytes from source.
 * @src: source string pointer.
 * @dest: destination string pointer.
 * @n : amount of caracters to be concatenated.
 * Return: String concatenated.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[j] != '\0')
		j++;
	for (; i < n && src[i] != '\0'; i++)
		dest[j + i] = src[i];
	dest[j + i] = '\0';
	return (dest);
}
