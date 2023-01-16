#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: string in which to check for needle
 * @needle: substring to find in haystack
 *
 * Return: pointer to beginning of needle in haystack or NULL if no match
 */

char *_strstr(char *haystack, char *needle)
{
int point;

for (; *haystack; haystack++)
{
for (point = 0; needle[point]; point++)
{
if (!(*(haystack + point)))
{
return (NULL);
}
if (*(haystack + point) != needle[point])
break;
}
if (needle[point] == '\0')
return (haystack);
}
return (NULL);
}
