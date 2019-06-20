#include "sort.h"

void swap(int *array, size_t i, size_t j);

/**
 * quick_sort_hoare - sorts an integer array using the QSH sort algorithm
 * @array: array to sort
 * @size: array's size
 * Return: Nothing.
 */
void quick_sort_hoare(int *array, size_t size)
{
	size_t i, j;

	if (array && size > 1)
		for (i = 0; i < size - 1; i++)
			for (j = 0; j < size - i - 1; j++)
				if (array[j] > array[j + 1])
				{
					swap(array, j, j + 1);
					print_array(array, size);
				}
}

/**
 * swap - swaps array elements a, b
 * @array: element's array
 * @i: index for "a" element
 * @j: index for "b" element
 */
void swap(int *array, size_t i, size_t j)
{
	int aux;

	aux = array[i];
	array[i] = array[j];
	array[j] = aux;

}
