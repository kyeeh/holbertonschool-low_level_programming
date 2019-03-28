#include "holberton.h"
/**
 * binary_to_uint_rec - converts a binary number to an unsigned int. recursively.
 * @b: pointer to string of 0 ir 1.
 * @params: array of auxiliar params for decimal calculation {decimal, chars, index, pow}.
 * Return: decimal number.
 */
unsigned int binary_to_uint_rec(const char *b, unsigned int *params)
{
	if (*b != '\0')
	{
		if (*b != '0' || *b != '1')
		{
			params[1]++;
			binary_to_uint_rec(b + 1, params);
			params[0] += (*b - 48) * pow(2, params[1] - params[2]);
			params[2]--;
			return (params[0]);
		}
		else
		{
			params[3] = 0;
			return (0);
		}
	}
	params[2] = params[1];
	return (0);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to string of 0 ir 1.
 * Return: converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int params[5] = {0, 0, 0, 1};

	if (b)
	{
		binary_to_uint_rec(b, params);
		if (params[3])
			return (params[0]);
	}
	return (0);
}
