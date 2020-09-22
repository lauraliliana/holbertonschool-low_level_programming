#include "holberton.h"
/**
 * print_last_digit - prints the las digit
 * @r: character to operate
 * Return: last digit
 *
 */
int print_last_digit(int r)
{
int ld, s;
s = r;
if (r < 0)
{
s = r * -1;
}
ld = s % 10;
_putchar(ld + '0');
return (ld);
}
