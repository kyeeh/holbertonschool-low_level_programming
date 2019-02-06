#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long l;
	double d;
	float f;

	printf("Size of a char: %u byte(s)\n", (unsigned int)sizeof(c));
	printf("Size of an int: %u byte(s)\n", (unsigned int)sizeof(i));
	printf("Size of an long int: %u byte(s)\n", (unsigned int)sizeof(l));
	printf("Size of an long long int: %u byte(s)\n", (unsigned int)sizeof(d));
	printf("Size of an float: %u byte(s)\n", (unsigned int)sizeof(f));
	return (0);
}
