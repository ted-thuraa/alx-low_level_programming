#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first integer to be swaped
 * @b: second integer to be swaped
 * Description: Uses headers to link and pointers to achieve goal
 * Swaps the values of a and b using pointers and
 * a var variable that holds one of the values to swap later
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int var;

	var = *a;
	*a = *b;
	*b = var;
}
