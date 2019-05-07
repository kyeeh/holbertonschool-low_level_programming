#include "holberton.h"

/**
 * _atoi - print absolute value for n
 * @s: the integer to be checked
 *
 * Return: absolute value for n.
 *
 */
int _atoi(char *s)
{
	*s = '0';
	return (*s - 48);
}
