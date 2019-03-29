#include "holberton.h"
/**
 * get_endianness - checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int endian, bit_check = 1;
	char *c = (char*)&bit_check;

	endian = *c ? 1 : 0;
	return (endian);
}
