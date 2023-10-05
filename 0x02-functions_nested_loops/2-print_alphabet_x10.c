#include <stdio.h>
#include "main.h"

/**
*print_alphabet_x10 - print lowercase alphabet
*
*Return: void
*/

void print_alphabet_x10(void)
{
	int i;

	i = 0;

	while (i < 10)
	{

		char alpha;

		alpha = 'a';

		while (alpha <= 'z')
		{

			_putchar(alpha);

			alpha++;
		}
		i++;
		_putchar('\n');
	}

}
