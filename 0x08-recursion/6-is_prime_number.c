#include "main.h"

/**
 * is_prime_number - returns a prime number
 * @n: number to check
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	int i;

	i = (n % 2);

	if (n == 1)
	{
		return (0);
	}
	else if (i == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
