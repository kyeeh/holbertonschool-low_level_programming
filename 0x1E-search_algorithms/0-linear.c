#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using the Linear search
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
