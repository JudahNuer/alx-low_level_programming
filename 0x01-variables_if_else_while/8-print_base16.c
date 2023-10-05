#include <stdio.h>

/**
*main - prints all hexadecimal Numbers
*
*Return: Always (0)
*/

int main(void) /*function prints he*/
{
	int number;

	for (number = 0; number < 16; number++)
	{
		if (number < 10)
		{
			putchar(number + '0'); /* Print digits 0 to 9 */
		}
		else
		{
			putchar(number - 10 + 'a'); /* Print letters A to F */
		}
	}

	putchar('\n'); /* Print a newline character */

	return (0);
}

