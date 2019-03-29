#include "holberton.h"
/**
 * flip_bits - sets the value of a bit to 0 at a given index.
 * @n: origin decimal number.
 * @m: destiny decimal number.
 * Return: number of bits you would need to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bit_count = 0;
	unsigned long int p = n ^ m;

	while (p)
	{
		bit_count += p & 1;
		p >>= 1;
	}
	return (bit_count);
}
