#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copies n bytes from src to dest
 * @src: address of memory area to copy from
 * @dest: adress of memory to copy to
 * @n: number of bytes to be copied to dest
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_ptr = dest;
	char *src_ptr = src;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest_ptr = *src_ptr;
		dest_ptr++;
		src_ptr++;
	}
	return (dest);
}
