#include "holberton.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area.
 * @dest: pointer to info destiny
 * @src: pointer to source of info
 * @n: amount of data to copy
 *
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
