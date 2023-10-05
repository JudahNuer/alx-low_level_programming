#include "main.h"
/**
 * _pow_recursion - Calculates the value of x raised to the power of y.
 * @x: The base value.
 * @y: The exponent value.
 *
 * Return: The result of x raised to the power of y.
 *         If y is negative, returns -1 to indicate an error.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1); /* Return -1 to indicate an error if y is negative */

	if (y == 0)
		return (1); /* Base case: x^0 is 1 */

	/* Recursive call to calculate x^(y-1), and then multiply by x */
	return (x * _pow_recursion(x, y - 1));
}
