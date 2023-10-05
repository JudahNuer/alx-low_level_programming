#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - prinnts n numbers seperated by a string
 *
 * @n: numbers to print
 * @separator: string placed between numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j = 0;
	va_list args;

	va_start(args, n);

	for (j = 0; j < n; j++)
	{
		if (separator == NULL || j == n - 1)
			printf("%d", va_arg(args, int));

		else
			printf("%d%s", va_arg(args, int), separator);
	}

	va_end(args);

	printf("\n");
}
