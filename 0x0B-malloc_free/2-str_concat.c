#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concats 2 strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concat string on sucesss, NULL on success
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str, *p_rtn;
	int length;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	length = (strlen(s1)) + (strlen(s2)) + 1;
	new_str = (char *)malloc(sizeof(char) * length);

	if (new_str == NULL)
		return (NULL);

	p_rtn = new_str;

	while (*s1 != '\0')
	{
		*p_rtn = *s1;
		s1++;
		p_rtn++;
	}

	while (*s2 != '\0')
	{
		*p_rtn = *s2;
		s2++;
		p_rtn++;
	}

	*p_rtn = '\0';

	return (new_str);
}
