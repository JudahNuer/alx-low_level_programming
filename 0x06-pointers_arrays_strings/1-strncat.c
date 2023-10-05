#include "main.h"

/**
 * _strncat - concats 2 strings
 *
 * @dest: destination
 *
 * @src: source
 *
 *@n: n bytes from src
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != 0 && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	*ptr = '\0';

	return (dest);
}
