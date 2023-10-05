#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - return pointer to copy of string
 * @str: string to be copied
 *
 * Return: copy of string
 */

char *_strdup(char *str)
{
	size_t length;
	char *new_str;
	char *source;
	char *destination;

	if (str == NULL)
	{
		return (NULL);
	}

	length = strlen(str) + 1;
	new_str = malloc(length * sizeof(char));

	if (new_str == NULL)
	{
		return (NULL);
	}

	source = str;
	destination = new_str;

	while (*source != '\0')
	{
		*destination = *source;
		source++;
		destination++;
	}

	*destination = '\0';

	return (new_str);
}
