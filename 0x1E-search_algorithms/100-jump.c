#include "search_algos.h"
int linear_search(int *array, size_t size, int value);
/**
 * jump_search - Binary search for a value in a sorted array
 * @array: it's a pointer to the first element of the array to search in
 * @size: it's the number of elements in array
 * @value: it's the value to search for
 * Return: first index where value is located.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t begining = 0, ending = size - 1;

	if (array)
		while (begining <= ending)
		{
			size_t middle = (ending - begining) / 2 + begining;

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
 * linear_search - Linear search for a value in an array
 * @array: it's a pointer to the first element of the array to search in
 * @size: it's the number of elements in array
 * @value: it's the value to search for
 * Return: first index where value is located.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
