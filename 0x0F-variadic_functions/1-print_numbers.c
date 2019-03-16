#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print all arguments.
 * @separator: printed between numbers.
 * @n: printed number of numbers.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list a_list;

	if (n > 0)
	{
		va_start(a_list, n);
		for (i = 0; i < n - 1; i++)
			if (separator)
				printf("%i%s", va_arg(a_list, int), separator);
			else
				printf("%i", va_arg(a_list, int));
		printf("%i\n", va_arg(a_list, int));
	}
	else
		printf("\n");
	va_end(a_list);
}
