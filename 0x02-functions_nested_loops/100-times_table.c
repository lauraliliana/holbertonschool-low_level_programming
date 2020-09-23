#include "holberton.h"
/**
 * print_times_table - prints the times table
 * @n: the limit
 * Return: void
 *
 */
void print_times_table(int n)
{
int i, j, r;
if (n > 0 && n <= 15)
{
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
r = i * j;
if (j > 0 && j < n)
{
_putchar(44);
_putchar(32);
if (r < 100)
{
_putchar(32);
if (r < 10)
{
_putchar(32);
}
}
}
if (r < 10)
{
_putchar(r + '0');
}
else if (r < 100)
{
_putchar(r / 10 + '0');
_putchar(r % 10 + '0');
}
else
{
_putchar(r / 100 + '0');
_putchar((r - 100) / 10 + '0');
_putchar(r % 10 + '0');
}
}
_putchar(10);
}
}
}
