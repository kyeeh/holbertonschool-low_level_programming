#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything.
 * @format: for the output.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list a_list;
	int *valid_format = NULL;

	va_start(a_list, format);
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(a_list, int));
				valid_format = &i;
				break;
			case 'i':
				printf("%i", va_arg(a_list, int));
				valid_format = &i;
				break;
			case 'f':
				printf("%f", va_arg(a_list, double));
				valid_format = &i;
				break;
			case 's':
				printf("%s",va_arg(a_list, char *));
				valid_format = &i;
				break;
			default:
				break;
		}
		if (format[i + 1] != '\0' && valid_format)
			printf(", ");
		i++;
		valid_format = NULL;
	}
	printf("\n");
	va_end(a_list);
}
