#include "holberton.h"

/**
 * _isdigit - uppercase checker
 * @c: the integer to be checked
 *
 * Return: 1 if is uppercase.
 * 0 in other cases.
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
