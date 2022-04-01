#include "main.h"

/**
 * main - a program that prints its name followed by a new line
 * @argc:argument count
 * @argv: number of pointers
 * Return: 0
 */

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *(argv + 0));
	return (0);
}
