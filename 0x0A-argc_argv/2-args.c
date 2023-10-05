#include <stdio.h>

/**
 * main - Print all command-line arguments on separate lines.
 * @argc: Number of command-line arguments.
 * @argv: Array of character pointers containing the arguments.
 *
 * Return: (0) on successful execution.
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	char **arg_ptr = argv;

	while (*arg_ptr)
	{
		printf("%s\n", *arg_ptr);
		arg_ptr++;
	}

	return (0);
}
