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
	unsigned int i, j, n, start;

	n = 0;
	start = 0;
	for (i = 0; haystack[i] != '\0'; i++)
		for (j = 0; needle[j] != '\0'; j++)
			if (haystack[i] == needle[j])
				if (start > 0)
					n++;
				else	
					start = i;
			else
			{
				if (start > 0)
				{

				}
				else
				{
					/* code */
				}
				
				
			}
				
	return (0);
}
