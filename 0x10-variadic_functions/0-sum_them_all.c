#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Finds sum of all its parameters
 * @n: number of integers
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int add = 0;
	unsigned int x;
	va_list valist;

	if (n == 0)
		return (0);
	va_start(valist, n);
	for (x = 0; x < n; x++)
		add += va_arg(valist, int);
	va_end(valist);
	return (add);
}
