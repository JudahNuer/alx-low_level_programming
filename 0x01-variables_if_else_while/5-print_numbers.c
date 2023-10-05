#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
*main - prints single digit nos of base 10
*
*Return: Always 0
*/

int main(void)
{
	int s_digit;

	s_digit = 0;

	while (s_digit < 10)
	{
		putchar(s_digit + '0');
		s_digit++;
	}

	putchar('\n');

	return (0);
}
