#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 * @argc: The size of the argv array.
 * @argv: An array containing the program command line arguments
 * 
 * Return: Always argc.
 */
int main(int argc, char **argv)
{
	printf("%i\n", argc - 1);
	return ((int)*argv);
}
