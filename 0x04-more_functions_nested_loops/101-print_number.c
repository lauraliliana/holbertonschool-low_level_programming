#include "holberton.h"

/**
 * print_number - prints a number using _putchar.
 * @n: number to print.
 * Return: void.
 */
void print_number(int n)
{
int d;
if (n < 0)
{
_putchar (45);
n = n * -1;
}
if (n >= 1000)
{
_putchar (n / 1000 + '0');
n = n - 1000;
_putchar ('0');
}
if (n > 100)
{
_putchar (n / 100 + '0');
d = n / 100;
d = d * 100;
n = n - d;
_putchar ('0');
}
if (n >= 10)
_putchar (n / 10 + '0');
_putchar (n % 10 + '0');
}
