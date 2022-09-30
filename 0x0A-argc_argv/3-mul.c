#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Returns 0
 */

int main(int argc, char *argv[])
{
	int i;
	int multi;

	multi = 1;

	if (argc < 3)
	{
		printf("Error\n");

		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		multi = multi * atoi(argv[i]);
	}
	printf("%d\n", multi);

	return (0);
}
