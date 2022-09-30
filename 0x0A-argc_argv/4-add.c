#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - program that adds positive numbers
 * @argc: Argument count 
 * @argv: Argument vector
 *
 * Return: Return 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			int a;
			char *str;
			str = argv[i];

			for (a = 0; str[a] != '\0'; a++)
			{
				if (str[a] < 48 || str[a] > 57)
				{
					printf("Error\n");

					return (1);
				}
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
