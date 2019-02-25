#include "holberton.h"
/**
 * _memcpy - copy memory area
 * @src: the source string
 * @dest: the destiny string
 * @n: first n bytes to copy memory.
 *
 * Return: a encoded string pointer.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
