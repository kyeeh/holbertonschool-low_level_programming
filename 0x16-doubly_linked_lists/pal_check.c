
#include <stdio.h>

int is_palindrome(int num);
/**
 * main - entry point to find palindrome program
 *
 * Return: always 0
 */
int main(void)
{
	int a = 100, b = 100, max;

	for (; a < 1000; a++)
	{
		for (; b < 1000; b++)
		{
			max = a * b;
			printf("Max palindrome with 3 digits product is: %i\n", max);
			if (is_palindrome(max))
				printf("is: %i\n", max);
		}
	}
	printf("Max palindrome with 3 digits product is: %u == (%u * %u)\n", max, a, b);
}

int is_palindrome(int num)
{
	int rev = 0, n = num;

	while (n != 0)
	{
		rev *= 10;
		rev += n % 10;
		n /= 10;
	}
	if (rev == num)
		return (1);
	return (0);
}