#include "main.h"

/**
*_isdigit - check the code
*
*@c: digit
*
* Return: 1 if true else 0.
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
