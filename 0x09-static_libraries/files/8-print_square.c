#include "holberton.h"

/**
 * print_square - prints a square size of the given number
 * @size: size of the square
 * Return: void.
 */
void print_square(int size)
{
int j, k;
if (size > 0)
{
for (j = 0; j < size; j++)
{
for (k = 0; k < size; k++)
{
_putchar(35);
}
_putchar(10);
}
}
else
_putchar(10);
}
