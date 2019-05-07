#include "holberton.h"

/**
 * _isupper - uppercase checker
 * @c: the integer to be checked
 *
 * Return: 1 if is uppercase.
 * 0 in other cases.
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
