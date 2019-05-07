#include "holberton.h"

/**
 * _abs - print absolute value for n
 * @n: the integer to be checked
 *
 * Return: absolute value for n.
 *
 */
int _abs(int n)
{
	if (n == 0)
		return (0);
	else if (n > 0)
		return (n);
	else
		return (-n);
}
