#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: no to represent
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 0)
	
		print_binary(n >> 1);
	
	_putchar((n & 1) + '0');
}
