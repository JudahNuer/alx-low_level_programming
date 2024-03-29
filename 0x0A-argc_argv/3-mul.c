#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Multiplies two numbers provided as command-line arguments.
 * @argc: Number of command-line arguments.
 * @argv: Array of character pointers containing the arguments.
 *
 * Return: (0) on successful multiplication, (1) on error.
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
