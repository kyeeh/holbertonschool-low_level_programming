#include <stdarg.h>
/**
 * sum_them_all - sums all arguments.
 * @n: number of elements.
 * Return: 0 for n == 0 or sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list a_list;

	va_start(a_list, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(a_list, int);
	va_end(a_list);
	return (sum);
}
