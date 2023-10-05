#include "main.h"
#include <stdio.h>

/**
 * _strchr - returns firsr occurance of c
 * @s: string
 *@c: character
 *
 * Return: *s
 */

char *_strchr(char *s, char c)
{
	while (*s >= '\0')
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}

	return (NULL);
}
