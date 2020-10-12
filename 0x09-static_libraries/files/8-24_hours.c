#include "holberton.h"
/**
 * jack_bauer - prints the clock per each minute
 * Return: void
 *
 */
void jack_bauer(void)
{
int h, m;
for (h = 00; h < 24; h++)
{
for (m = 00; m < 60; m++)
{
_putchar(h / 10 + '0');
_putchar(h % 10 + '0');
_putchar(58);
_putchar(m / 10 + '0');
_putchar(m % 10 + '0');
_putchar(10);
}
}
}
