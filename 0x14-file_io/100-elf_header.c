#include<stdio.h>
#include "holberton.h"
/**
 * main - main function
 * @argc: number of arguments.
 * @argv: pointer to array of arguments.
 * Return: 1 on sucess or -1 on failure.
 */
int main(int argc, char *argv[])
{
	printf("%i, %p\n", argc, (void *)*argv);
	system("readelf -a ubuntu64");
	return (1);
}
