#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: is the array to be reversed
 * @n: is the number of elements in the array
 * Return: reversed array
 */

void reverse_array(int *a, int n)
{
	int j = 0;

	n--;

	while (j < n)
	{
		swap_int(a + n, a + j);
		n--;
		j++;
	}
}

/**
 * swap_int - swap integers of a and b
 * @a: first integer
 * @b: second integer
 * Return: void funtion
 */
void swap_int(int *a, int *b)
{
	int j;

	j = *a;

	*a = *b;

	*b = j;

}
