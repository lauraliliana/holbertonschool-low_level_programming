#include "holberton.h"

/**
 * print_rev - prints a string in reverse.
 * @s: string a imprimir.
 * Return: none.
 */
void print_rev(char *s)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
}
for (j = i; j > 0; j--)
{
_putchar(s[j]);
}
_putchar(10);
}
