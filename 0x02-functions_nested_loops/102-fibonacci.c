#include <stdio.h>

/**
*main - entry point
*
*Return: 0
*/

int main(void)
{
	long int y;
	long int z;
	long int sum;
	int i;

	y = 1;
	z = 2;

	printf("%ld, %ld, ", y, z);

	for (i = 0; i <= 47; i++)
	{
		sum = y + z;
		printf("%ld", sum);
		if (i == 47)
		{
			printf("\n");
		} else
		{
			printf(", ");
		}

		y = z;
		z = sum;

	}
	return (0);
}
