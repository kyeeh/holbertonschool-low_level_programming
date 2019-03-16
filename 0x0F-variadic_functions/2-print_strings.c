#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print string arguments.
 * @separator: printed between strings.
 * @n: printed number of numbers.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char * str;
	unsigned int i;
	va_list a_list;

	va_start(a_list, n);
	for (i = 0; i < n - 1; i++)
	{
		str = va_arg(a_list, char *);
		if (str && separator)
			printf("%s%s", str, separator);
		else
			printf("(nil)");
	}
	printf("%s\n", va_arg(a_list, char *));
	va_end(a_list);
}