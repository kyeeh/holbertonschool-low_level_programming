#include <stdio.h>
#include "function_pointers.h"
/**
 * main - prints the opcodes of its own main function.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Returns: integer
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
