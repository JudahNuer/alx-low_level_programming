#include <stdio.h>

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number
 * Return: The natural square root, or -1 if none
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return -1;  // Negative numbers do not have a real square root

	if (n == 0 || n == 1)
		return n;  // Base case: square root of 0 or 1 is the number itself

	return _sqrt_helper(n, 2);  // Call the helper function
}

/**
 * _sqrt_helper - Helper function for _sqrt_recursion
 * @n: The number
 * @i: The current candidate for square root
 * Return: The natural square root, or -1 if none
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return i;  // Found the square root

	if (i * i > n)
		return -1;  // The number does not have a natural square root

	return _sqrt_helper(n, i + 1);  // Try the next candidate
}
