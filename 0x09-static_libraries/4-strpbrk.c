#include "main.h"
#include <stdio.h>

/**
 *_strpbrk - locates first occurance of accept in s
 *
 * @s: string
 * @accept: compared to the s
 *
 * Return: pointer to first occurance
 */

char *_strpbrk(char *s, char *accept)
{

	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return ((char *)s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
