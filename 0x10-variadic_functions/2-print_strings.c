#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_strings - prints strings followed by '\n'
 *
 *@separator: placed between strings
 *@n: number of strings passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int k;

	va_start(args, n);

	for (k = 0; k < n; k++)
	{
		char *strng = va_arg(args, char *);

		if (strng == NULL)
			printf("(nil)");
		else if (separator == NULL || k == n - 1)
			printf("%s", strng);
		else
			printf("%s%s", strng, separator);
	}

	va_end(args);

	printf("\n");

}
