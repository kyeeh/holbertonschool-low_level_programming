#include "holberton.h"
/**
 * _strstr - locates a substring.
 * @haystack: the string to check
 * @needle: substring to find
 *
 * Return: a pointer to the beginning of the locate substring.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *substr = needle;
		char *base_dadress = haystack;
		while (*haystack != '\0' && *substr != '\0' && *substr == *haystack)
		{
			substr++;
			haystack++;
		}
		if (*substr == '\0')
			return (base_dadress);
		haystack = base_dadress + 1;
	}
	return (0);
}
