#include <stdio.h>

/**
 * main - Write a program that prints the number of arguments passed into it
 * @args: Argument count
 * @argv: Argument vector
 *
 * Return: Returns 0
 */

int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;

	return (0);
}
