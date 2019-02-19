#include "holberton.h"
#include <stdio.h>
/**
 * fibonacci - it shows Fibonacci Series.
 */
int main(void)
{
	int n = 2;
	double aux = 1;
	double fib = 2;
	
	while (n <= 50)
	{
		if (n == 2)
			printf("1, 2, ");
		else
		{
			fib = fib + aux;
			printf("%g", fib);
			aux = fib - aux;
			if (n == 50)
				printf("\n");
			else
			{
				printf(", ");
			}
		}
		n++;
	}
	return (0);
}
