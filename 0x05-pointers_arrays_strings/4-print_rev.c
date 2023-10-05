#include "main.h"
/**
 *print_rev - reverses and prints a string
 *
 *@s: string
 */
void print_rev(char *s)
{
	char *t;

	t = s;

	while (*t != '\0')
	{
		t++;
	}

	t--;

	while (t >= s)
	{
		_putchar(*t);
		t--;
	}
	_putchar('\n');
}
