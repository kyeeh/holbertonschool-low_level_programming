#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 * @argc: The size of the argv array.
 * @argv: An array containing the program command line arguments
 *
 * Return: Always 0 || 1.
 */
int main(int argc, char **argv)
{
	int i = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("%i\n", 0);
		return (0);
	}
	for (; i < argc; i++)
	{
		if (atoi(argv[i]) == 0 && (*argv[i] < 48 || *argv[i] > 57))
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%i\n", sum);
	return (0);
}
