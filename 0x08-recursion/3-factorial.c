#include "main.h"

/**
 * factorial - returns factorial of given number
 * @n: number to check
 *
 * Return: -1 if n is lower than 0, 0 i n is equal to zero
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
