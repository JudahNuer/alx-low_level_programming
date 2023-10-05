#include <stdio.h>
#include "main.h"
/**
* print_sign - Prints the sign of a number
* @n: number to check sign of
*
* Return: 1 if n < zero, 0 if n is zero, -1 if n > zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	_putchar('-');
	return (-1);
}
