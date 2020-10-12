#include "holberton.h"
/**
 * times_table - prints the times table
 * Return: void
 *
 */
void times_table(void)
{
int i, j, r;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
r = i * j;
if (j > 0 && j < 10)
{
_putchar(44);
_putchar(32);
if (r < 10)
{
_putchar(32);
}
}
if (r < 10)
{
_putchar(r + '0');
}
else
{
_putchar(r / 10 + '0');
_putchar(r % 10 + '0');
}
}
_putchar(10);
}
}
