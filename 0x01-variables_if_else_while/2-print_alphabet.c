#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - prints lowercase alphabets
*
* Return: Always 0
*/

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}

	putchar('\n');

	return (0);
}
