#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: array of argument
 * Return: 1
 */

int main(int argc, char **argv)
{
	int multiply;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	multiply = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", multiply);
	return (0);
}
