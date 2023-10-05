#include "main.h"
#include <stdlib.h>

/**
 * create_array - makes array of size and put char in array
 * @size: size
 * @c: c
 *
 * Return: pointer to array, NULL if unsucessful
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);

	if (size == 0 || s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		s[i] = c;

	}

	return (s);
}
