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
		printf("String: %s\n", b);
		printf("Valor de b[%i]: %c\n", params[1], *b);
		if (*b != '0' || *b != '1')
		{
			params[1]++;
			printf("SIGUIENTE Valor de b[%i]: %c\n", params[1], *(b + 1));
			binary_to_uint_rec(b + 1, params);
			params[0] += (*b - 48) * pow(2, params[1] - params[2]);
			printf("CALCULO DECIMAL: %u\n", params[0]);
			params[2]--;
			printf("RETORNANDO: Param[1]: %u, Param[2]: %u\n", params[1], params[2]);
			return (params[0]);
		}
		else
		{
			printf("ERROR: %s\n", b);
			params[3] = 0;
			return (0);
		}
	}
	params[2] = params[1];
	printf("SALIENDO: Param[1]: %u, Param[2]: %u\n", params[1], params[2]);
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
	printf("---------------------\n");
	return (0);
}
