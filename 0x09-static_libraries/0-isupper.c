#include "main.h"

/**
* _isupper- check for uppercase letters
*
*@c: letter to be checked
*
* Return: 1 if true and if 0 false
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
