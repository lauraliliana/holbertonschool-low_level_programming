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
ld = r % 10;
if (ld < 0)
{
ld = ld * -1;
}
_putchar(ld + '0');
return (ld);
}
