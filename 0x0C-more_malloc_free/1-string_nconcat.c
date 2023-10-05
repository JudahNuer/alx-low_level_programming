#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_alloc, *result;
	unsigned int ln1, ln2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (s1)
		ln1 = strlen(s1);

	if (s2)
		ln2 = strlen(s2);
	if (n >= ln2)
		n = ln2;

	new_alloc = (char *)malloc((ln1 + n + 1) * sizeof(char));

	if (!new_alloc)
		return (NULL);

	result = new_alloc;

	while (*s1 != '\0')
	{
		*new_alloc = *s1;
		new_alloc++;
		s1++;
	}

	while (*s2 != 0 && n > 0)
	{
		*new_alloc = *s2;
		new_alloc++;
		s2++;
		n--;
	}
	*new_alloc = '\0';
	return (result);
}
