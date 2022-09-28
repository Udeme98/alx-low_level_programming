#include "main.h"

/**
 * _sqrt - prints square root of number
 * @a: square root
 * @b: integer to find square root
 * Return: square root of a number
 */
int _sqrt(int a, int b)
{
	if (b * b > a)
		return (-1);
	if (b * b == a)
		return (b);
	return (_sqrt(a, b + 1));
}

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: int number to find its square root
 * Return: -1 i n has no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (_sqrt(n, 1));
	}
}
