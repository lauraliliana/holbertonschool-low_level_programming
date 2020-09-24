 #include "holberton.h"

/**
 * print_diagonal - draws a diagonal line.
 * @n: line size
 * Return: none.
 */
void print_diagonal(int n)
{
int j, k;
if (n > 0)
{
for (j = 0; j < n; j++)
{
for (k = 0; k < j; k++)
{
_putchar(32);
}
_putchar(92);
_putchar(10);
}
}
else
_putchar(10);
}
