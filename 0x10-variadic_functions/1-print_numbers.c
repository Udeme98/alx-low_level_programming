#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @n: number of integers to be printed
 * @separator: string to be printed between numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	if (n > 0)
	{
		va_start(list, n);

		for (i = 1; i <= n; i++)
		{
			printf("%d", va_arg(list, int));
			if (i != n && separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(list);

	printf("\n");
}
