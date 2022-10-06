#include "main.h"
#include <unistd.h>

/**
 * _putchar - write character c to stdout
 * @c: the character to print
 * Return: Return 1
 * on error, -1 is return, and errorno is set
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
