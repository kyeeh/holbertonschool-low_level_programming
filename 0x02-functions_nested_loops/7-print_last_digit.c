#include "holberton.h"
/**
 * print_last_digit - print the last digit for n
 * @n: the integer to be checked
 *
 * Return: last digit for n.
 *
 */
int print_last_digit(int n)
{
	_putchar('0' + ((n > 0 ? n : -1 * n) % 10));
	return ((n > 0 ? n : -1 * n) % 10);
}
