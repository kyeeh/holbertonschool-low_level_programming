#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Intializes random number generator */
	time_t t;
	int i;
	short bin;

	srand((unsigned int) time(&t));
	i = rand();
	bin = rand() % 2;
	printf("Binary: %i\n", bin);
	if (i == 0)
	{
		printf("%i is zero\n", i);
	}
	else
	{
		if (bin == 0)
			i = i * -1;
	}
	if (i > 0)
		printf("%i is positive\n", i);
	else
		printf("%i is negative\n", i);
	return (0);
}
