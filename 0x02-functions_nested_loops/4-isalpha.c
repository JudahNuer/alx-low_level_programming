#include <stdio.h>
#include "main.h"

/**
*_isalpha - checks if isalpha
*@c: The character to print
*
*Return: 1 if true and 0 is false
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' &&  c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

