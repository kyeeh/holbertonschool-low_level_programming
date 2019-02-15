#include <stdio.h>
#include <math.h>

/**
 * main - Print prime factors for n.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 2;
	double n = 612852475143;
	/*int n = 1231952;*/

	while (n > 0)
		if (fmod(n, i) == 0)
		{
			printf("%d, ", i);
			n = n / i;
			i = 2;
		}
		else
		{
			i++;
			/* printf("N=%i, i=%i",n,i);*/
			if (i == n)
			{
				printf("%d\n", i);
				break;
			}
		}
	return (0);
}
