#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - locates a substring.
 * @haystack: puntero
 * @needle: pointer
 * Return: a pointer to the beginning of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
int l, l2, i, j, c;
l = 0, l2 = 0, c = 0;
while (haystack[l] != '\0')
l++;
while (needle[l2] != '\0')
l2++;
for (i = 0; i < l; i++, haystack++)
{
for (j = 0, c = 0; j < l2; j++)
{
if (haystack[j] == 0)
break;
if (haystack[j] == needle[j])
{
c += 1;
}
}
if (c == l2)
return (haystack);
}
return (0);
}
