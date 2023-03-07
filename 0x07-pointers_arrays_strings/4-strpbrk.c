#include "main.h"
/**
 * _strpbrk -  searches for a string of any number of bytes
 * @s: points to string to match bytes in accept
 * @accept: matches bytes in s
 * Return: pointer to matching bytes in s to that of accept or null for non.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != 0)
	{
		char *acc_ptr = accept;

		while (*acc_ptr != '\0')
		{
			if (*s == *acc_ptr)
			{
				return (s);
			}
			acc_ptr++;
		}
		s++;
	}
	return ('\0');
}
