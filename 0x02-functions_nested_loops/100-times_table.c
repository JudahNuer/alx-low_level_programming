#include "main.h"
/**
 * print_times_table - Function that prints the 9 times table, starting with 0
 *
 *@n: number times table
 *
 * Return void
 */

void print_times_table(int n)
{
	int row;
	int col;
	int prod;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			_putchar('0');
			for (col = 1; col <= n; col++)
			{
				prod = col * row;
				_putchar(',');
				_putchar(' ');

				if (prod <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(prod + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar(' ');
					_putchar(prod / 10 + '0');
					_putchar(prod % 10 + '0');
				}
				else
				{
					_putchar(prod / 100 + '0');
					_putchar(((prod / 10) % 10) + '0');
					_putchar(prod % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
