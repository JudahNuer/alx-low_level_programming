#include <stdio.h>

/**
* main - prints lowercase letters except q and e
*
*Return: Always 0
*/

int main(void)
{
	char lowercase = 'a';

	/* Loop through lowercase letters */
	while (lowercase <= 'z')
	{
		/* Exclude 'q' and 'e' */
		if (lowercase != 'q' && lowercase != 'e')
		{
			putchar(lowercase); /* Print the current letter */
		}
		lowercase++;
	}

	putchar('\n'); /* Print a newline character */

	return (0);
}

