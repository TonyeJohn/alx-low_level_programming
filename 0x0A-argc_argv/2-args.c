#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Return 0
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
