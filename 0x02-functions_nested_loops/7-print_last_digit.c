#include "holberton.h"
/**
 * print_last_digit - prints the las digit
 * @r: character to operate
 * Return: last digit
 *
 */
int print_last_digit(int r)
{
int ld;
if (r < 0)
{
r = r * (-1);
}
ld = r % 10;
_putchar(ld + '0');
return (ld);
}
