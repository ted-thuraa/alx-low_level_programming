#include "main.h"
#include <stdio.h>

/**
 * main - fizz for multiples of 3 and buzz for 5 and fizzbuzz for both
 * Description: Uses headers to link and a nested loops to achieve goal
 * fizz buzz from 1-100. print fizz for multiples of 3 and buzz for
 * multiples of 5 and fizzbuzz for multiples of both eg. 15
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			if (i != 100)
			{
				printf("Buzz ");
			}
			else 
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
