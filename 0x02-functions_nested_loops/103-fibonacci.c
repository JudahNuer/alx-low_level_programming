#include <stdio.h>
/**
*main - prints sum of even fibonacci values
*
*Return: Always 0
*/
int main(void)
{
	/* first 2 numbers in fibonacci sequence */
	long int num1;
	long int num2;

	/* num3 stores next number in sequence */
	long int num3;

	/* store sum of even-valued fibonacci numbers */
	long int sum;

	num1 = 0;
	num2 = 1;
	num3 = 0;
	sum = 0;

	while (num3 < 4000000)
	{
		num3 = num2 + num1;
		num1 = num2;
		num2 = num3;

		if (num3 % 2 == 0)
		{
			sum += num3;
		}
	}
	printf("%ld\n", sum);

	return (0);
}
