#include "holberton.h"
/**
 * print_base2 - prints numbers in binary recursively
 * @n: The number to be printed
 * @length: The amount of digits to be printed
 *
 * Return: On success length.
 */
void print_base2(unsigned long int n)
{
	if (n >> 1)
		print_base2(n >> 1);
	_putchar((n & 1) + '0');
}
/**
 * print_binary - writes in binary
 * @params: The name for va_list
 *
 * Return: On success length.
 */
void print_binary(unsigned long int n)
{
	print_base2(n);
}
