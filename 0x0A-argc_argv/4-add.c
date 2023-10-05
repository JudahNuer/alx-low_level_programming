#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers provided as command-line arguments.
 * @argc: Number of command-line arguments.
 * @argv: Array of character pointers containing the arguments.
 *
 * Return: (0) on successful addition, (1) on error.
 */

int main(int argc, char *argv[])
{
	int sum = 0;

	int i;

	for (i = 1; i < argc; i++)
	{
		/* Check if the current argument contains non-digit characters. */
		int j;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		/* Convert the argument to an integer and add it to the sum. */
		sum += atoi(argv[i]);
	}

	/* Print the sum or 0 if no numbers were passed as arguments. */
	printf("%d\n", sum);

	return (0);
}
