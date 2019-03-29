#include "holberton.h"
/**
 * set_bit -  sets the value of a bit to 1 at a given index.
 * @n: decimal number.
 * @index: of bit to be return.
 * Return: selected new decimal.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	*n = *n | mask;
	return (*n);
}
