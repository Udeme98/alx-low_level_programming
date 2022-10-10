#include <stdio.h>

/**
 * main -  prints the name of the file it was compiled from
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	printf("%s", argv[0]);
	return (0);
}
