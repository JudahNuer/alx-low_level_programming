#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: string which is being searched
 * @c: character being located
 * Return: pointer of first sighting of character or Null if not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
