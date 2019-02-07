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
	int i, j;

	for (i = 0; i <= 9; ++i)
	{
		for (j = 0; j <= 9; ++j)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (((i * 10) + j) < 99)
			{
				putchar(',');
				putchar(' ');
			}
			else
				putchar('\n');
		}
	}
	return (0);
}
