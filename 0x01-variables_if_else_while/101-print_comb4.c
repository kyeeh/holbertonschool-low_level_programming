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
	int i, j, k;

	for (i = 0; i <= 9; ++i)
	{
		for (j = 0; j <= 9; ++j)
		{
			for (k = 0; k <= 9; ++k)
			{
				if ((i != j) && (j > i) && (j != k) && (k > j))
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (((i * 100) + (j * 10) + k) < 789)
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
	return (0);
}
