#include "main.h"

/**
 * rev_string - reverses string
 *
 * @s: string
 */

void rev_string(char *s)
{
	char *t;
	char store;

	t = s;

	while (*(t + 1) != '\0')
	{
		t++;
	}

	while (s < t)
	{
		store = *t;
		*t = *s;
		*s = store;

		t = t - 1;
		s = s + 1;
	}
}
