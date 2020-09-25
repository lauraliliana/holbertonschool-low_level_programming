#include "holberton.h"
/**
 * print_number - prints a number using _putchar.
 * @n: number to print.
 * Return: void.
 */
void print_number(int n)
{
int a, b, c;
if (n < 0)
{
_putchar (45);
n = n * -1;
}
if (n >= 1000)
{
a = n / 1000;
_putchar (a % 10 + '0');
}
if (n >= 100)
{
b = n / 100;
_putchar (b % 10 + '0');
}
if (n >= 10)
{
c = n / 10;
_putchar (c % 10 + '0');
}
_putchar (n % 10 + '0');
}
