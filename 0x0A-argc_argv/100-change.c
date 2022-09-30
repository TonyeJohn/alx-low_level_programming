#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Return 0
 */

int main(int args, char *argv[])
{
	int b;
	int coins = 0;

	if (args != 2)
	{
		printf("Error\n");

		return (1);
	}
	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("0\n");

		return (0);
	}
	for (; b >= 0;)
	{
		if (b >= 25)
			b -= 25;
		else if (b >= 10)
			b -= 10;
		else if (b >= 5)
			b -= 5;
		else if (b >= 2)
			b -= 2;
		else if (b >= 1)
			b -= 1;
		else
			break;
		coins += 1;
	}
	printf("%d\n", coins);

	return (0);
}
