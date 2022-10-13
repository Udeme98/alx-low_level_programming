#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums up the integers
 * @n: number of arguments passed to th function
 * Return: result of the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list ar;

	if (n == 0)
		return (0);
	va_start(ar, n);

	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ar, int);
	}

	va_end(ar);

	return (sum);
}
