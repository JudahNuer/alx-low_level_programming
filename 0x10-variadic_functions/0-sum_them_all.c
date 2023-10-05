#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of all parameters
 *@n: number of arguments
 *
 * Return: sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int j = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	while (j < n)
	{
		sum += va_arg(args, int);
		j++;
	}

	va_end(args);

	return (sum);
}

