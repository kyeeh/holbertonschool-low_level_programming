#include "holberton.h"
#include <stdio.h>
/**
 * times_table - print 9 times table
 */
void print_times_table(int n)
{
	int i, j, product, c, d, u;

	if (!(n < 0 || n > 15))
	for (i = 0; i <= n; i++)
		for (j = 0; j <= n - 1; j++)
		{	
			product = i * j;
			u = product % 10;
			d = (product / 10) % 10;
			c = product / 100;
			if (d == 0)
				_putchar(product + '0');
			else if (c == 0)
			{	
				_putchar(d + '0');
				_putchar(u + '0');
			}
			else
			{
				_putchar(c + '0');
				_putchar(d + '0');
				_putchar(u + '0');
			}
			if (j == n - 1)
				_putchar('\n');
			else
			{
				_putchar(',');
				_putchar(' ');
				(c == 0) ? _putchar(' ') : ((d == 0) ? _putchar(' ') : 0);
			}
			printf("Number: %i%i%i \n", c, d, u);
		}
}
