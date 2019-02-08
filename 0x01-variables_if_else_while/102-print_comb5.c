#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, p, q, a, b;

	a = 0;
	b = 0;
	for (i = 0; i <= 9; ++i)
	{
		for (j = 0; j <= 9; ++j)
		{
			putchar(' ');
			a = (i * 10) + j;
			for (p = 0; p <= 9; ++p)
			{
				for (q = 0; q <= 9; ++q)
				{
					b = (p * 10) + q;
					if (b > a)
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(' ');
						putchar(p + '0');
						putchar(q + '0');
						if (!((a == 98) && (b == 99)))
						{
							putchar(',');
							putchar(' ');
						}
						else
							putchar('\n');						
					}
				}
			}
		}
	}
	return (0);
}


