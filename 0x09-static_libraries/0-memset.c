#include "main.h"

/**
 * _memset - fills n bytes of *s with c
 *
 * @s: string
 *
 * @b: character
 *
 * @n: number of bytes
 *
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *ptr;

	ptr = s;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (ptr);
}
