#include "holberton.h"

/**
 * _islower - lowcase checker
 * @c: the integer to be checked
 *
 * Return: 1 if is lowercase.
 * 0 in other cases.
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);
}
