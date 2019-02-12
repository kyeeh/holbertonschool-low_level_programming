/* more headers goes there */
#include <stdio.h>
#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hb[] = "Holberton\n";	
	int i;

	for (i = 0; i <= 10 ; i++)
	{
		_putchar(hb[i]);
	}
	return (0);
}
