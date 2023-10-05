#include "main.h"

/**
 * factorial - Calculates the factorial of a given number.
 * @n: The number for which to calculate the factorial.
 *
 * Return: The factorial of 'n', or -1 if 'n' is negative (error).
 */
int factorial(int n)
{
	if (n < 0)
		return (-1); /* Return -1 to indicate an error for negative numbers */

	if (n == 0)
		return (1); /* Base case: factorial of 0 is 1 */

	/* Recursive call to calculate factorial for n-1, and then multiply by n */
	return (n * factorial(n - 1));
}
