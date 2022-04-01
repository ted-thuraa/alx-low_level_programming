#include "main.h"

/**
 * main - adds positive numbers
 * @argc: argumrnt count
 * @argv: array of arguments
 * Return: 0 if it works 1 if not
 */

int main(int argc, char **argv)
{
	int sum;
	int i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (checker(argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}

/**
 * checker - checks if its a number
 * Return: 0
 */

int checker(char *s)
{
	while (*s)
	{
		if ((*s >= 65 && *s <= 90) || (*s >= 97 && *s <= 122))
			return (0);
		s++;
	}
	return (1);
}
