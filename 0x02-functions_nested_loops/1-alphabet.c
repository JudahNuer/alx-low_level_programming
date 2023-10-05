#include <stdio.h>
#include "main.h"

/**
*print_alphabet - print lowercase alphabet
*
*Return: Alwways (0)
*/

void print_alphabet(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);

		alpha++;
	}

	putchar('\n');

}
