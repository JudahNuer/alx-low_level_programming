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
	int num;

	while (num < 10)
	{
		putchar(num + '0');

		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}

	putchar('\n');

	return (0);
}
