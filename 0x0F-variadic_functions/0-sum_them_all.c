#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - searches for an integer.
 * @array: array to iterate.
 * @size: array size.
 * @cmp: comparate function.
 * Return: returns the index of an element found.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
    va_list a_list;
    
	va_start( a_list, n );
	if (n == 0)
		return (0);
	else
		for (i = 0; i < n; i++)
			sum += va_arg (a_list, int);
	va_end (a_list); 
	return (sum);
}
