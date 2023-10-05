#include <stdio.h>

/**
* _abs - Computes the absolute value of an integer
* @num: The integer for which to compute the absolute value
*
* Return: The absolute value of the input integer
*/
int _abs(int num)
{
	if (num < 0)
	{
		return (-num);
	}

	return (num);
}
