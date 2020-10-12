#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string.
 * @s: string to measure
 * Return: Always 0.
 */
int _strlen(char *s)
{
int n;
while (s[n] != '\0')
{
n++;
}
return (n);
}
