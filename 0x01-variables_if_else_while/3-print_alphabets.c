#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
*main - prints lower and uppercase letters
*
*Return: Always 0
*/

int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}

	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}

	putchar('\n');

	return (0);
}

