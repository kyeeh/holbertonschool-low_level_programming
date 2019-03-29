#include "holberton.h"
/**
 * binary_to_uint_rec - binary to decimal recursively.
 * @b: pointer to string of 0 ir 1.
 * @dec: decimal number for calculation.
 * Return: decimal number.
 */
unsigned int binary_to_uint_rec(const char *b, unsigned int dec)
{
	if (*b != '\0')
	{
		if (*b >= '0' && *b <= '1') /* ONLY BINARIES CHARS*/
			return (binary_to_uint_rec(b + 1, (dec << 1) | (*b - 48)));
		else
			return (0);
	}
	return (dec);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to string of 0 ir 1.
 * Return: converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;

	if (b)
		return (binary_to_uint_rec(b, dec));
	return (0);
}
