#include "main.h"

/**
 * _strlen_recursion - return length 0f string
 * @s: string
 *
 * Return: 0 if = '\n' or length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
