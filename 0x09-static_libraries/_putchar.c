#include <stdio.h>
#include "main.h"

/**
*main - prints string _putchar
*
*Return: Always (0) success
*/

int main(void)
{
	char out[] = "_putchar";
	int i;


	i = 0;


	while (out[i] != '\0')
	{
		_putchar(out[i]);

		i++;
	}

	_putchar('\n');

	return (0);
}
