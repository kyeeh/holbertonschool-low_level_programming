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
	int n;
	short m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	if (m == 0)
		printf("Last digit of %i is %hi and is %hi\n", n, m, m);
	else
	{
		if (m > 5)
			printf("Last digit of %i is %hi and is greater than 5\n", n, m);
		else
			printf("Last digit of %i is %hi and is less than 6 and not 0\n", n, m);
	}
	return (0);
}
