#include "holberton.h"
#include <stdio.h>

/**
 * swap_int -  swaps the values of two integers.
 * @a: int pointer.
 * @b: int pointer.
 */
void swap_int(int *a, int *b)
{
	int aux = *a;
	*a = *b;
	*b = aux;
}
