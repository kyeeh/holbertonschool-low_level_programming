#include "search_algos.h"
void atos(int *array, size_t from, size_t to);
/**
 * exponential_search - Binary search for a value in a sorted array
 * @array: it's a pointer to the first element of the array to search in
 * @size: it's the number of elements in array
 * @value: it's the value to search for
 * Return: first index where value is located.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t begining = 0, ending = size - 1;

	if (array)
		while (begining <= ending)
		{
			size_t middle = (ending - begining) / 2 + begining;

			atos(array, begining, ending);
			if (array[middle] == value)
				return (middle);
			if (value > array[middle])
				begining = middle + 1;
			else
				ending = middle - 1;
		}
	return (-1);
}

/**
 * atos - Print an array or sub-array
 * @array: it's a pointer to the first element of the array to search in
 * @from: it's the number of elements in array
 * @to: it's the value to search for
 * Return: first index where value is located.
 */
void atos(int *array, size_t from, size_t to)
{
	size_t i;

	printf("Searching in array: ");
	for (i = from; i < to; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}
