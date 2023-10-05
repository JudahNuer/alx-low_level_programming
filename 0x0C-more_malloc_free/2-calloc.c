#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *new_array;
	unsigned int count;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	new_array = malloc(nmemb * size);

	if (new_array == NULL)
	{
		return (NULL);
	}
	count = 0;

	while (count < (nmemb * size))
	{
		new_array[count] = 0;
		count++;
	}
	return (new_array);
}
