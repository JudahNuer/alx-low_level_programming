#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
*main - prints combination of number
*
*Return: Always (0)
*/

int main(void)
{
	int f_num;
	int s_num;

	while (f_num < 99)
	{
		s_num = f_num + 1;
		while (s_num < 100)
		{
			putchar(f_num / 10 + '0');
			putchar(f_num % 10 + '0');
			putchar(' ');
			putchar(s_num / 10 + '0');
			putchar(s_num % 10 + '0');

			if (f_num != 98 || s_num != 99)
			{
				putchar(',');
				putchar(' ');
			}
			s_num++;
		}
		f_num++;
	}

	putchar('\n');

	return (0);
}
