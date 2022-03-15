#include "main.h"

/**
 * print_sign -  checks if the number is pos or neg or 0
 * @n: is an int delivered from main.c
 *
 * Return: int 0 when done and no errors
 */
int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}

}
