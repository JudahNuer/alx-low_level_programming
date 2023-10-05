#include <stdio.h>

/**
*main - entry point
*
*Return: 0
*/

int main(void)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (x < 1024)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			y += x;
		}

		x++;
	}
	printf("%d", y);
	printf("\n");
	return (0);
}
