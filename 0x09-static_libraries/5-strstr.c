#include "main.h"
#include <stdio.h>

/**
 *_strstr - finds occurance of substring
 *
 * @haystack: string
 * @needle: substring
 *
 * Return: pointer to beginning os substring
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *hp = haystack;
		char *np = needle;

		while (*np != '\0' && *hp == *np)
		{
			hp++;
			np++;
		}

		if (*np == '\0')
		{
			return ((char *)haystack);
		}
		haystack++;
	}

	return (NULL);
}
