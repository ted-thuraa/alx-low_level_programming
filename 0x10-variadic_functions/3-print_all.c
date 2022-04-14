#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: separator
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *s;
	int flag = 0;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(args, int));
				flag = 1;
				break;

			case 'i':
				printf("%i", va_arg(args, int));

				flag = 1;

				break;

			case 'f':
				printf("%f", (float) va_arg(args, double));

				flag = 1;

				break;

			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
				{
					printf("(nil)");
					flag = 1;
					break;
				}
				printf("%s", s);
				flag = 1;
				break;
		}
		if (format[i + 1] != 0 && flag == 1)
			printf(", ");
		i++;
		flag = 0;
	}
	va_end(args);
	printf("\n");
}
