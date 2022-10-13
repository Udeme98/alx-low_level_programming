#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums up the integers
 * @n: number of arguments passed to th function
 * Return: result of the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned unt i;
	int sum = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
