#include "main.h"

/**
 * flip_bits - returns bits you would need to flip from one number to another.
 * @n: dest number
 * @m: source number
 * Return: No of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a = n ^ m;
	int len = 0;

	while (a)
	{
		if (a & 1)
			len++;
		a >>= 1;
	}
	return (len);
}
