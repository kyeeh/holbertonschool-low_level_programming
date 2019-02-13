#include "holberton.h"
/**
 * times_table - print 9 times table
 */
void times_table(void)
{
	int i, j, product, c, d;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;
			if (product > 9)
			{
				_putchar(',');
				_putchar(' ');
				c = product / 10;
				d = product % 10;
				_putchar(c + '0');
				_putchar(d + '0');
			}
			else if (product == 0)
			{
				if (i == 0)
				{
					if (j < 9)
					{
						_putchar('0');
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
					else
						_putchar('0');
				}
				else
					 _putchar('0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}
		}
		_putchar('\n');
	}
}
