#include "main.h"
/**
*print_line - prints lines
*
*@n: number of lines to print
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
			_putchar('\n');

		_putchar('_');
	}
	_putchar('\n');
}
