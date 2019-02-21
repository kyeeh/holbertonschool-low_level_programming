#include "holberton.h"
#include <stdio.h>
/**
 * reverse_array - Reverse an Array.
 * @a: an array of integers
 * @n: the number of elements to swap
 */
void reverse_array(int *a, int n)
{
	int aux;
	int i = 0;
	int j = n - 1;

	for (i = 0; i < ((n - 1) / 2); i++)
	{
		aux = a[i];
		a[i] = a[j];
		a[j] = aux;
		j--;
	}
}
