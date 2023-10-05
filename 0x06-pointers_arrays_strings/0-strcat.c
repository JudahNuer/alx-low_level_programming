#include "main.h"

/**
 * _strcat - concatenates strings
 *
 * @dest: destination
 *
 * @src: source
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char *d_ptr = dest;

	while (*d_ptr != '\0')
	{
		d_ptr++;
	}

	while (*src != '\0')
	{
		*d_ptr = *src;
		src++;
		d_ptr++;
	}

	*d_ptr = '\0';
	return (dest);
}
