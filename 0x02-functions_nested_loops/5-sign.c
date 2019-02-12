#include "holberton.h"

/**
 * print_sign(int n) - sign checker
 * @n: the integer to be checked
 *
 * Return: 1 if it greater than zero.
 * 0 if it's zero and -1 if lower than zero.
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
