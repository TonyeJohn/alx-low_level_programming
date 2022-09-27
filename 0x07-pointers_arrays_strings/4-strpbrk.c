#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to check
 * @accept: string to check against
 *
 * Return: pointer to byte in s that matches or NULL if no match
 */

char *_strpbrk(char *s, char *accept)
{
char c, *p;
for (c = *s; c != 0; s++, c = *s)
{
for (p = accept; *p != 0; p++)
{
if (c == *p)
}
return (s);
}
}
}
return (0);
}
