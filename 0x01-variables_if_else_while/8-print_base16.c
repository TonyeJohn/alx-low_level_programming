#include <stdio.h>
/**
 * main - print if the number is postive, zero, or negative
 *
 * Description: using the main function
 * this program prints "Programming is positive, zero, or negative
 * Return: 0
 */
int main(void)
{
char k;
for (k = '0'; k <= '9'; k++)
{
	putchar(k);
}
for (k = 'a'; k <= 'f'; k++)
{
	putchar(k);
}
putchar('\n');
return (0);
}
