#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest
 *
 * @src: source
 *
 * @dest: destination
 *
 * @n: number of bytes
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned char *_dest = (unsigned char *)dest;
	unsigned char *_src = (unsigned char *)src;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		_dest[i] = _src[i];
	}

	return (dest);
}
