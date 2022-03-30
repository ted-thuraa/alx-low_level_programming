#include "main.h"

/**
 * square_root - returns the natural square root of a number
 * @i: number to be checked
 * @c: original input
 * Return: value of the square root
 */

int square_root(int i, int c)
{
	if (c < 0)
	{
		return (-1);
	}
	else if (i * i == c)
		return (1);
	else if (i * i > c)
		return (-1);
	return (square_root(i + 1, c));
}
/**
 * _sqrt_recursion - function to print square root of n
 * @n: integer to be checked
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	return (square_root(0, n));
}
