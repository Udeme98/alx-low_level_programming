#include <stdio.h>

/**
 * main - prints number 1 to 100
 * followd by new line
 * Return: 0
 */
int main(void)
{
	int j;

	for (j = 1; j <= 100; j++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("Buzz\n");
	return (0);
}
