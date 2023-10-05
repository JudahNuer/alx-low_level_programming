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
	int t_num;

	f_num = 0;

	while (f_num < 8)
	{
		s_num = f_num + 1;
		while (s_num < 9)
		{
			t_num = s_num + 1;
			while (t_num < 10)
			{
				putchar(f_num + '0');
				putchar(s_num + '0');
				putchar(t_num + '0');

				if (f_num != 7 || s_num != 8 || t_num != 9)
				{
					putchar(',');
					putchar(' ');
				}
				t_num++;
			}
			s_num++;
		}
		f_num++;
	}

	putchar('\n');

	return (0);
}
