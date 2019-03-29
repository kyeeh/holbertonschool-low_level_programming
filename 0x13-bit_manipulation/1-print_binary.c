#include "holberton.h"
/**
 * print_base2 - prints numbers in binary recursively.
 * @n: The number to be printed
 *
 * Return: On success length.
 */
void print_base2(unsigned long int n)
{
	if (n >> 1) /* Division by 2 */
		print_base2(n >> 1);
	_putchar((n & 1) + '0'); /* Module(2) */
}
/**
 * print_binary - prints the binary representation of a number.
 * @n: The number to be printed
 */
void print_binary(unsigned long int n)
{
	print_base2(n);
}
