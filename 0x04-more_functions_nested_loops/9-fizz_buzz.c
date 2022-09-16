#include <stdio.h>

/**
 * main - prints number 1 to 100
 * followd by new line
 * Return: 0
 */
int main(void)
{
	int j;

	for (j = 1; j < 100; j++)
	{
		if (j % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (j % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (j % 5 == 0 && j % 3 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", j);
		}
	}
	printf("Buzz\n");
	return (0);
}
