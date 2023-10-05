#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - main entry point
 *
 *Return: Always (0)
 */

void positive_or_negative(int n)
{

	/* your code goes there */

	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else
	{
		printf("%d is negative\n", n);
	}

}
