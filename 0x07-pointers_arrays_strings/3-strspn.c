#include "main.h"

/**
* _strspn - returns length of a prefix substring
* @s: string
* @accept: substring
*
* Return: number of bytes of char in s also in accepts
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;

	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*a == *s)
			{
				break;
			}
			a++;
		}

		if (*a == '\0')
		{
			break;
		}
		n++;
		s++;
	}
	return (n);
}
