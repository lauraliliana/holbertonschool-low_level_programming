#include "holberton.h"

/**
 * print_triangle - print a triangle of size.
 * @size: triangle size.
 * Return: void.
 */
void print_triangle(int size)
{
int j, k, l;
if (size > 0)
{
for (j = 0; j < size; j++)
{
for (k = size - 1; k > j; k--)
{
_putchar(32);
}
for (l = 0; l <= j; l++)
{
_putchar(35);
}
_putchar(10);
}
}
else
_putchar(10);
}
