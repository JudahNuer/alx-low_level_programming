#include <stdio.h>
#include "main.h"

/**
*_islower- checks if islower
*@c: The character to print
*
*Return: 1 if true and 0 is false
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

